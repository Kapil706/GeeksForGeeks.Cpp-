#include <iostream>

void InsertAtIndex(int arr[],int sizeofArray,int index,int element){

    for(int i=sizeofArray-1;i>=index;i--){


        arr[i+1]=arr[i];

    }

    arr[index]=element;






}

using namespace std;
int main() {

    int t;
    cin>>t;
    while(t--){
        int sizeofArray;
        cin>>sizeofArray;

        int arr[sizeofArray];
        for(int i=0;i<sizeofArray-1;i++){

            cin>>arr[i];


        }

        int index;
        cin>>index;

        int element;
        cin>>element;

        InsertAtIndex(arr,sizeofArray,index,element);

        for(int i=0;i<sizeofArray;i++){

            cout<<arr[i]<<" ";

        }







    }
    return 0;
}