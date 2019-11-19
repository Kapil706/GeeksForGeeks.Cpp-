#include <iostream>
using namespace std;



// input :  0101110000111000
//  output :0000000001111111


void BinarySort(int arr[], int n){

    int count=0;

    for(int i=0;i<n;i++){
        if(arr[i]==0){
            count++;
        }
    }

    for(int i=0;i<n;i++){

        if(count!=0){
            arr[i]=0;
            count--;
        }
        else{
            arr[i]=1;
        }


    }


}

void printArray(int arr[], int n){
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
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        BinarySort(a,n);
        printArray(a,n);

    }
    return 0;
}