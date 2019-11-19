#include <iostream>
using namespace std;


int Partition(int arr[], int l, int high){
    int pivot;

    pivot = arr[high];

    int i =l-1;

    for(int j=l;j<=high;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }

    swap(arr[i+1],arr[high]);
    return i+1;

}







void QuickSort(int arr[], int l,int high){

    if(l<high){


        int pi;

        pi=Partition(arr,l,high);

        QuickSort(arr,l,pi-1);
        QuickSort(arr,pi+1,high);







    }







}

void printArray(int arr[], int l, int high){
    for(int i=0;i<high;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
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

        QuickSort(a,0,n-1);
        printArray(a,0,n);

    }
    return 0;
}