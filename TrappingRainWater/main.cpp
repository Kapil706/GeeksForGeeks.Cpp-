#include <iostream>

using namespace std;


int TrapWater(int arr[],int n){

    int leftMax[n],rightMax[n];
    leftMax[0]=0;
    rightMax[n-1]=0;


    for(int i=0;i<n-1;i++){

        leftMax[i+1] += max(arr[i],leftMax[i]);
        rightMax[n-i-2] += max(arr[n-i-1],leftMax[n-i-1]);

    }

    int water= 0;

    for(int i=0;i<n;i++){

        water += max(min(leftMax[i],rightMax[i])-arr[i],0);


    }

    return water;








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

         cout<<TrapWater(arr,n)<<endl;




     }




    return 0;
}