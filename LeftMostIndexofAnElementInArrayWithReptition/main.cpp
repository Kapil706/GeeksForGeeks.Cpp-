#include <iostream>
using namespace std;
int leftIndex(int a[],int n, int x){

    int low=0;
    int high=n-1;

    while(low<=high){


        int mid= low+(high-low)/2;

        if(a[mid]==x && (mid==0 || a[mid-1]!=x))
            return mid;

        else if(a[mid]<x)
            low=mid+1;
        else
            high=mid-1;












    }
    return -1;












}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for (int i = 0; i < n; ++i) {
            cin>>a[i];

        }
        int x;
        cin>>x;

        cout<<leftIndex(a,n,x)<<endl;


    }
    return 0;
}