#include <bits/stdc++.h>
using namespace std;

int Intersection(int arr[], int brr[], int n, int m){
    set<int>a;
    set<int>b;
    int count=0;
    for(int i=0;i<n;i++){
        a.insert(arr[i]);
    }
    for(int i=0;i<m;i++){
        b.insert(brr[i]);
    }

    for(int x:a){
        if(b.find(x)!=b.end()){
            count++;
        }

    }
    if(count!=0){
        return count;
    }
    else if(count==0){
        return count;
    }
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

        cout<<Intersection(arr,brr,n,m);
        cout<<endl;


    }

    return 0;
}