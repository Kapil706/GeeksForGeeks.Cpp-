#include <bits/stdc++.h>
using namespace std;
bool ZeroSum(int arr[], int n){


    unordered_set<int>s;

    int sum=0;

    for(int i=0;i<n;i++){
        sum += arr[i];
        if(sum ==0 || s.find(sum)!=s.end()){
            return  true;
        }
        s.insert(sum);
    }
    return false;

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

        if(ZeroSum(arr,n))
        {cout<<"YES";}
        else{
          cout<<"No"; }

    }
    return 0;
}