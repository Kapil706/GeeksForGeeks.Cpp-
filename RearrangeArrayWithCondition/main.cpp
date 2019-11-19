#include <iostream>

using namespace std;
// arr[arr[i]]
// I/P : 1 0
// O/P : 0 1
void rearrange( int *arr,int n){


    for(int i=0;i<n;i++){

        arr[i] += (arr[arr[i]]%n)*n;


    }

    for(int i=0;i<n;i++){


        arr[i]  /= n;
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

        rearrange(arr,n);






    }
    return 0;
}