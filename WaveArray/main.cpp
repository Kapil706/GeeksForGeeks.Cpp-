#include <iostream>

using namespace std;




void WaveArray(int *arr,int n){

    for(int i=0;i*2<n-1;i++){

        swap(arr[2*i],arr[2*i+1]);


    }






}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];

        }

        WaveArray(arr,n);

        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }








    }
    return 0;
}