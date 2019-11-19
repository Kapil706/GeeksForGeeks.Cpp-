#include <bits/stdc++.h>

using namespace std;


void Winner(string arr[], int n){
    map<string,int>m;
    string mp;
    int max=0;

    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }
    for(auto i=m.begin();i!=m.end();i++){
        if(i->second>max){
            max=i->second;
            mp=i->first;
        }
    }

    cout<<mp<<" "<<max;

}

int main(){


    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        Winner(arr,n);
        cout<<endl;
    }









    return 0;
}