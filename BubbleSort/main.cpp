#include <iostream>

using namespace std;



void swap(int *x, int *y)
{
    int temp =*x;
    *x=*y;
    *y=temp;
}




int BubbleSort(int arr[], int n ,int i){
       for(i=0;i<n-1;i++) {
           for (int j = i + 1; j < n; j++) {
               if (arr[i] > arr[j]) {
                   swap(&arr[i], &arr[j]);
               }
           }

       }

    for(i=0;i<n;i++){
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
        int i;
        for( i=0;i<n;i++){
            cin>>a[i];

        }

        cout<<BubbleSort(a,n,i)<<endl;
    }
    return 0;
}