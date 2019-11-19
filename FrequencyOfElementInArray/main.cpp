#include <iostream>

using namespace std;


void FrequencyArr(int arr[],int n){

    int p[n];
    for(int i=0;i<n;i++){

        p[i]=0;
    }

    for(int i=0;i<n;i++){

        p[arr[i]-1]++;


    }

    for(int i=0;i<n;i++){


        cout<<p[i]<<" ";

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

        FrequencyArr(arr,n);

        cout<<endl;





    }
    return 0;
}