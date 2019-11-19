#include <iostream>
#define size 50

using namespace std;

void SpiralTraversal(int m,int n, int a[size][size]){
    int k=0;
    int l=0;

    while(k<m&&l<n){
        for(int i=l;i<n;i++){
            cout<<a[k][i]<<" ";
        }
        k++;
        for(int i=k;i<=m-1;i++){
            cout<<a[i][n-1]<<" ";
        }
        n--;
        if(k<m){
            for(int i=n-1;i>=l;i--){
              cout<<a[m-1][i]<<" ";
            }
            m--;
        }
        if(l<n){
            for(int i=m-1;i>=k;i--){
                cout<<a[i][l]<<" ";
            }
            l++;
        }
    }
}


int main() {
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>m>>n;
        int a[size][size];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        SpiralTraversal(m,n,a);
        cout<<endl;
    }
    return 0;
}