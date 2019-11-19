#include <bits/stdc++.h>
using namespace std;

void Pair(int arr[], int n){
    set<int>s;
    map<int,int>mp;
    int flag=0;

    for(int i=0;i<n;i++){
        if(arr[i]>0){
            s.insert(arr[i]);
        }
    }

    for(int i=0;i<n;i++){
        if(arr[i]<0 && s.find(-arr[i])!=s.end()){
            flag=1;
            mp.insert(pair<int,int>(-arr[i],arr[i]));

        }
    }
    if(flag==0){
        cout<<flag<<endl;
    }
    else{

        for(auto p=mp.begin();p!=mp.end();p++){
            cout<<p->first<<" "<<p->second<<" ";
        }
        cout<<endl;
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
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        Pair(arr,n);
    }
    return 0;
}