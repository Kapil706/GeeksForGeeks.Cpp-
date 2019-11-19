#include <iostream>
#define size 100

using namespace std;

void ExchangeColumns(int n, int m, int arr[size][size]){

    for(int i=0;i<n;i++){

        swap(arr[i][0],arr[i][m-1]);



    }

    for(int i=0;i<n;i++){
        for (int j = 0; j < m; ++j) {

            cout<<arr[i][j]<<" ";

        }
    }










}


int main() {
    long t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int arr[size][size];
        for (int i = 0; i <n ; ++i) {
            for (int j = 0; j <m ; ++j) {
                cin>>arr[i][j];

            }

        }

        ExchangeColumns(n,m,arr);

        cout<<endl;

    }
    return 0;
}