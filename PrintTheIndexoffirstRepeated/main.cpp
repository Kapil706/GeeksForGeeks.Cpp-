#include <bits/stdc++.h>

using namespace std;


int firstRepeat(int arr[], int n){
    int count=INT_MAX;
    unordered_map<int,int>freq;


    for(int i=1;i<=n;i++){
        freq[arr[i]]++;
    }

    for(int i=1;i<=n;i++){
        if(freq[arr[i]]>1){

            if(i<count){
                count=i;
            }




        }
    }
    if(count!=INT_MAX){

        return count;
    }
    else
    {
        return -1;
    }


}

int main() {
    //code
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }

        cout<<firstRepeat(arr,n);
        cout<<endl;
    }
    return 0;
}