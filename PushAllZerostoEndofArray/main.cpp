#include <iostream>
#include<bits/stdc++.h>

using namespace std;

void PushZero(int arr[], int n){

    int f=0;
    for(int i=0;i<n;i++){

        if(arr[i]!=0){
            swap(arr[f++],arr[i]);
        }


    }
    for(int i=0;i<n;i++){
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
        int arr[n];
        for(int i=0;i<n;i++){

            cin>>arr[i];



        }

        PushZero(arr,n);





    }
    return 0;
}