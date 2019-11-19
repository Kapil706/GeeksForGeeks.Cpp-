#include <iostream>

using namespace std;


int LongestSubSequence(int arr[], int n){
    int count=1;
    int ans=1;
    for(int i=0;i<n-1;i++){
        if((arr[i+1]-arr[i])==1){
            count++;
            if(count>ans)
                ans=count;
        }
        else if((arr[i+1]-arr[i])!=0){
            count=1;
        }
    }
    return  ans;
}


int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<LongestSubSequence(arr,n)<<endl;
    }
    return 0;
}