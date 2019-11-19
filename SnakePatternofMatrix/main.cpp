#include <iostream>
using namespace std;


void SnakePattern(int arr[][100],int n){

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i%2==0){cout<<arr[i][j]<<" ";}else{cout<<arr[i][n-1-j]<<" ";}
        }

    }

}



int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n][100];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){

                cin>>arr[i][j];
            }
        }

        SnakePattern(arr,n);
        cout<<endl;



    }
    return 0;
}