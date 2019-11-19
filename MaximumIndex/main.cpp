#include <iostream>
using namespace std;


int MaxIndex(int arr[],int n){

    int maxdiff=0;

    for(int i=0;i<n;i++){
        for(int j=1;j<n;j++){

            if(arr[i]<=arr[j]&&j-i>maxdiff){

                maxdiff=j-i;

            }


        }
    }

    return maxdiff;






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

        if(n==1){
            cout<<0<<endl;
            continue;
        }

        cout<<MaxIndex(arr,n);



    }
    return 0;
}