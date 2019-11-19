#include <iostream>
using namespace std;

int arr[5000000];


int count(int arr[],int l, int h){

    while(l<=h){
        int mid=l+(h-l)/2;

        if((mid==h && arr[mid]==1)||(arr[mid]==1 && arr[mid+1]==0))
            return mid+1;
        if(arr[mid]==0)
            return count(arr,l,mid-1);
        if(arr[mid]==1 && arr[mid+1]==1)
            return count(arr,mid+1,h);
    }






}

int count1s(int n){



    return count(arr,0,n-1);

}





int main() {
     int t;
     cin>>t;
     while(t--){
         int n;
         cin>>n;
         for(int i=0;i<n;i++){
             cin>>arr[i];
         }

         cout<<count1s(n)<<endl;

     }
    return 0;
}