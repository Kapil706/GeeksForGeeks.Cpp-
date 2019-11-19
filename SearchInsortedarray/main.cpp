#include <iostream>


using namespace std;
int SearchInSortedArray(int n,int x, int arr[]){

    int low=0;
    int high=n-1;

    while(high>=low){

        int mid = low+(high-low)/2;

        if(arr[mid]==x){
            return 1;

        }
        if(arr[mid]>x){
            high=mid-1;

        }
        else{
            low=mid+1;
        }






    }
    return  -1;










}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x;
        cin>>x;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        cout<<SearchInSortedArray(n,x,arr)<<endl;
    }
    return 0;
}