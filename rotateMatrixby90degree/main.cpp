#include <iostream>
#define N 50

using namespace std;

void rotateby90(int n, int arr[][N]){

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            swap(arr[i][j],arr[j][i]);

        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n/2;j++){
            swap(arr[j][i],arr[n-1-j][i]);
        }
    }




}


int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[N][N];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>arr[i][j];
            }
        }

        rotateby90(n,arr);

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<arr[i][j]<<" ";
            }
        }

        cout<<endl;






    }return 0;
}