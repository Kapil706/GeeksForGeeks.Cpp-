#include <iostream>


using namespace std;


 void distinctinWindow(int arr[], int n, int k){

    int ar[1000000]={0};

    int count=0;




    for(int i=0;i<n;i++){

        ar[arr[i]]++;



    }








}


int main() {
    int n,k;
    cin>>n;
    cin>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    distinctinWindow(arr,n,k);
    return 0;
}