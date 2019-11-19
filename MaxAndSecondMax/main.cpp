#include <iostream>

using namespace std;


void MaxandSecondMax(int arr[],int n){

    int max= -1;
    int max2= -1;

    for(int i=0;i<n;i++){

        if(max<arr[i]){

            // very important

            max2 = max;

            max=arr[i];


        }

        else if(arr[i]>max2 && arr[i]!=max){


            max2= arr[i];
        }



    }

  cout<<max<<" "<<max2;





}


int main() {
    int t;
    cin>>t;
    while(t--){

        int n;
        cin>>n;

        int arr[n];
        for(int i=0;i<n;i++){


            cin>>arr[n];

        }

        MaxandSecondMax(arr,n);



    }
    return 0;
}