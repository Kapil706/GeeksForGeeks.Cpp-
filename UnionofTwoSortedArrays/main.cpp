#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void Union(int arr[],int brr[], int n, int m){

    vector<int>a;

    for(int i=0;i<n;i++){
        a.push_back(arr[i]);
    }

    for(int j=0;j<m;j++){
        a.push_back(brr[j]);
    }
    sort(a.begin(),a.end());
    cout<<a[0]<<" ";

    for(int i=1;i<a.size();i++){
        if(a[i]!=a[i-1]){
            cout<<a[i]<<" ";
        }
    }



}







int main() {
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

        for(int j=0;j<m;j++){
            cin>>brr[j];
        }

        Union(arr,brr,n,m);
        cout<<endl;
    }
    return 0;
}