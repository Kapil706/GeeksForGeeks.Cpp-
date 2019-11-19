#include <iostream>

using namespace std;

void Merge(int arr[], int s, int r, int mid){

    int i=s;
    int j=mid+1;
    int k=s;
    int temp[10000000];

    while(i<=mid && j<=r){
        if(arr[i]<arr[j]){
           temp[k++]=arr[i++];
        }
        else{
            temp[k++]=arr[j++];

        }


    }

    while(i<=mid){
        temp[k++]=arr[i++];
    }

    while(j<=r){
        temp[k++]=arr[j++];
    }


    for(int i=s;i<=r;i++){
        arr[i]=temp[i];
    }






}












void MergeSort(int arr[], int s, int r){




    if(s<r){

        int mid;
        mid = s+(r-s)/2;
        MergeSort(arr,s,mid);
        MergeSort(arr,mid+1,r);
        Merge(arr,s,r,mid);







    }











}

void printArray(int arr[], int n){

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
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        MergeSort(a,0,n-1);
        printArray(a,n);
        cout<<endl;


    }
    return 0;
}