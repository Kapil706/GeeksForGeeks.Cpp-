#include <iostream>

using namespace std;


void ReverseArray(int arr[],int low,int high){

    while(low<high){

        swap(arr[low],arr[high]);
        low++;
        high--;

    }




}


void RotateArray(int arr[],int n,int k){

    ReverseArray(arr,0,k-1);
    ReverseArray(arr,k,n-1);
    ReverseArray(arr,0,n-1);

}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;

        int arr[n];
        for(int i=0;i<n;i++){

            cin>>arr[i];



        }

        RotateArray(arr,n,k);

        for(int i=0;i<n;i++){

            cout<<arr[i]<<" ";
        }

        cout<<endl;







    }
    return 0;
}