#include <iostream>
using namespace std;
void Segregate(int arr[], int n){
    int l=0;
    int mid=0;
    int high=n-1;

    while(mid<=high){
        switch(arr[mid]){
            case 0:
                swap(arr[mid],arr[l]);
                l++;
                mid++;
                break;
            case 1:
                mid++;
            case 2:
                swap(arr[mid],arr[high]);
                high--;
        }
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
        Segregate(arr,n);
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}