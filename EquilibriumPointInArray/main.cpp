#include <iostream>

using namespace std;


int EqPoint(int arr[],int n){

    int sum=0;

    for(int i=0;i<n;i++){

        sum += arr[i];



    }
    int l_sum=0;


    for(int i=0;i<n;i++){
        if(l_sum==sum-arr[i]){
            return i+1;
        }
        l_sum += arr[i];
        sum -= arr[i];


    }

    return -1;










}



int main() {
    int t;
    cin>>t;
    while(t--){

        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){cin>>arr[i];}
        cout<<EqPoint(arr,n);






    }
    return 0;
}