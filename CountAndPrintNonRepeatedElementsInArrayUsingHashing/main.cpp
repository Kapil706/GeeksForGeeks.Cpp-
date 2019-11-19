#include <bits/stdc++.h>
using namespace std;



int CountNonRepeat(int arr[], int n){

    int count = 0;

    unordered_map<int,int> freq;


    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }

    for(int i=0;i<n;i++){
        if(freq[arr[i]]==1){
            count++;
            cout<<arr[i]<<" ";
        }
    }
    return  count;
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

        cout<<CountNonRepeat(arr,n)<<endl;
    }
    return 0;
}