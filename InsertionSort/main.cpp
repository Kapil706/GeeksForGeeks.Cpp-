#include <iostream>
using namespace std;


int InsertionSort(int arr[], int n){


    int key;
    for(int i=1;i<n;i++){
        int j=i-1;
        key =arr[i];

        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }

        arr[j+1]=key;


    }



    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }









}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];

        }

        cout<<InsertionSort(a,n)<<endl;
    }
    return 0;
}