#include <iostream>

using namespace std;


void reverseArray(int arr[],int n){


    for(int i=0;i<n/2;i++){

        swap(arr[i],arr[n-i-1]);

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

        reverseArray(arr,n);

        for(int i=0;i<n;i++){


            cout<<arr[i]<<" ";

        }







    }
    return 0;
}