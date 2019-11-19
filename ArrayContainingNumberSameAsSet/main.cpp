#include <bits/stdc++.h>
using namespace std;

int main() {
    //code
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        string arr[n];

        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        vector<int> v;
        regex b("[1-3]+");
        for(int i=0; i<n; i++){

            if(regex_match(arr[i],b)){
                v.push_back(stoi(arr[i]));
            }
        }

        if(v.size() == 0){
            cout<<"-1";
        }else{
            sort(v.begin(),v.end());
            for(int i=0; i<v.size(); i++){
                cout<<v[i]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}