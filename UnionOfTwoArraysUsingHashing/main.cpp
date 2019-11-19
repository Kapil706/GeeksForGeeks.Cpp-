#include <bits/stdc++.h>
using namespace std;

int Union(int arr[], int brr[], int n, int m){

    set<int>s;

    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }

    for(int i=0;i<m;i++){
        s.insert(brr[i]);
    }

    return s.size();

}



int main() {
    //code
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int arr[n];
        int brr[m];
        for(int i=0;i<n;i++){
            cin>>arr[i];

        }
        for(int i=0;i<m;i++){
            cin>>brr[i];
        }

        cout<<Union(arr,brr,n,m);
        cout<<endl;
    }
    return 0;
}
