#include <iostream>
using namespace std;
int peakElement(int arr[],int n){

    int low=0;
    int high=n-1;

    while(low<=high){
        int mid = low+(high-low)/2;

        if(arr[mid]>arr[mid+1]&&arr[mid]>arr[mid-1])
            return 1;

        else if(arr[mid]<arr[mid-1])
            high=mid-1;
        else
            low=mid+1;






    }
    return 0;











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
        bool f=0;
        int A = peakElement(arr,n);

        if(n==1)
          f=1;
        else if(A==0 && arr[0]>=arr[1])
          f=1;
        else if(A==n-1 && arr[n-1]>=arr[n-2])
            f=1;
        else if(arr[A]>=arr[A+1]&& arr[A]>=arr[A-1])
           f=1;
        else
            f=0;
    }
    return 0;
}