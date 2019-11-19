#include <bits/stdc++.h>
using namespace std;

//T(n)=O(n)


int PairSum(int arr[], int n, int sum){
    unordered_set<int>s;
    for(int i=0;i<n;i++){
        int temp=sum-arr[i];

        if(s.find(temp)!=s.end()){
            return 1; // pair exists with given sum
        }
        s.insert(arr[i]);
    }
    return 0; // pair does not exits
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sum;
        cin>>sum;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        cout<<PairSum(arr,n,sum)<<endl;

    }
    return 0;
}