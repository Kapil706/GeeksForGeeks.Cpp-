#include <iostream>
#define size 801

using namespace std;


int SearchXinMatrix(int n, int m , int a[size][size],int x){

    int i=0,j=m-1;
    while(i<n&&(j<m&&j>=0)){
        if(a[i][j]==x)
            return 1;
        if(a[i][j]<x)
            i++;
        else
            j--;
    }
    return 0;










}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,m,x;
        cin>>n>>m;
        int a[size][size];
        for(int i=0;i<n;i++){
            for (int j = 0; j <m ; ++j) {
                a[i][j]=0;
                cin>>a[i][j];

            }
        }
        cin>>x;

        cout<<SearchXinMatrix(n,m,a,x)<<endl;
    }
    return 0;
}