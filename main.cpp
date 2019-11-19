#include <iostream>
#define n 100

using namespace std;

void add(int n1,int m1, int n2 , int m2 , int arr1[n][n], int arr2[n][n]){
    int arr3[n][n]={0};

    if(n1==n2&&n2==m2){

        for (int i = 0; i <n1 ; ++i) {
            for (int j = 0; j < m1; ++j) {
                arr3[i][j]=arr1[i][j]+arr2[i][j];
                cout<<arr3[i][j]<<" ";


            }

        }


    }
    else{
        cout<<-1;
    }

}


int main() {
    int t;
    cin>>t;
    while(t--){
        int n1,m1;
        cin>>n1>>m1;
        int arr1[n][n];
        for(int i=0;i<n1;i++)
            for(int j=0;j<m1;j++)
                cin>>arr1[i][j];
        int n2,m2;
        cin>>n2>>m2;
        int arr2[n][n];
        for (int k = 0; k <n2 ; ++k) {
            for (int i = 0; i <m2 ; ++i) {
                cin>>arr2[k][i];
            }

        }

        add(n1,m1,n1,m2,arr1,arr2);
        cout<<"\n";
    }
    return 0;
}