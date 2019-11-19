#include <iostream>
#define size 50

using namespace std;

void ChangeColumns(int n, int m , int arr[size][size]){\
for(int i=0;i<n;i++){
    for(int j=0;j<m/2;j++){
        swap(arr[i][j],arr[i][m-1-j]);
    }
}
}
void ChangeRows(int n, int m, int arr[size][size]){
    for (int i = 0; i <n/2 ; ++i) {
        for (int j = 0; j <m ; ++j) {
            swap(arr[i][j],arr[n-1-i][j]);
        }
    }

    for(int i=0;i<n;i++){
        for (int j = 0; j <m ; ++j) {
            cout<<arr[i][j]<<" ";

        }
    }
}


int main() {
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int arr[size][size];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
            }
        }

        ChangeColumns(n,m,arr);

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<arr[i][j]<<" ";
            }
        }
        cout<<endl;
        ChangeRows(n,m,arr);
        cout<<endl;
    }
    return 0;
}