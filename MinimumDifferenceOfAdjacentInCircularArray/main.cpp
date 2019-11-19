#include <iostream>

using namespace std;



int minDiff(int arr[],int n){


    // for checking circular array I am subtracting last position from first one


    int minimum = abs(arr[0]-arr[n-1]);


    for(int i=0;i<n-1;i++){

        minimum = min(abs(arr[i]-arr[i+1]),minimum);


    }

    return minimum;



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

        int r = minDiff(arr,n);


        cout<<r;







    }
    return 0;
}