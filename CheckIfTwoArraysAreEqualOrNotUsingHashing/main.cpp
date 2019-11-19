#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int EqualArray(ll arr[], ll brr[], ll n){

    map<ll,ll>a;
    //set<int>b;
    ll count=0;

    for(ll i=0;i<n;i++){
        a[arr[i]]++;
    }


    for(ll i=0;i<n;i++){
        a[brr[i]]--;
    }

    for(auto p=a.begin();p!=a.end();p++){
        if(p->second!=0){
            count++;
            break;
        }

    }



    if(count==0){
        return 1;
    }
    else if(count!=0){
        return 0;
    }






}

int main() {
    //code
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll arr[n];
        ll brr[n];
        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }
        for(ll i=0;i<n;i++){
            cin>>brr[i];
        }

        cout<<EqualArray(arr,brr,n)<<endl;

    }
    return 0;
}