#include <iostream>
using namespace std;



int count=0;



int Merge(int arr[], int low,int mid, int high){

    int l=mid-low+1;
    int a[l];
    int h=high-low;
    int ar[h];

    for(int i=0;i<l;i++){
        a[i]=arr[i+low];

    }

    for(int i=0;i<h;i++){
        ar[i]=arr[mid+i+1];
    }

    int i=0;
    int j=0;
    int k=low;

    while(i<l && j<h){
        if(a[i]<ar[j]){
            arr[k++]=a[i++];
        }
        else{
            arr[k++]=ar[j++];
            count = count+(l-i);  // l = mid
        }
    }

    while(i<l){
        arr[k++]=a[i++];
    }
    while(j<h){
        arr[k++]=ar[j++];
    }






}

void MergeSort(int arr[], int low, int high){


    if(low<high){
        int mid = low+(high-low)/2;
        MergeSort(arr,low,mid);
        MergeSort(arr,mid+1,high);
        Merge(arr,low,mid,high);


    }


}









int InversionCount(int arr[], int n){


    int low=0;
    int high = n-1;

    MergeSort(arr,low,high);

    int ans =count;
    count=0;
    return ans;






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


        cout<<InversionCount(arr,n)<<endl;
    }
    return 0;
}