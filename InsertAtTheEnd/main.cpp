#include <iostream>

using namespace std;


void insertAtEnd(int arr[],int sizeofArray,int element){


    arr[sizeofArray-1]=element;




}

int main() {
    int t;
    cin>>t;
    while(t--){
        int sizeofArray;
        cin>>sizeofArray;

        int arr[sizeofArray];
        int element;
        cin>>element;

        for(int i=0;i<sizeofArray-1;i++){



            cin>>arr[i];


        }

        insertAtEnd(arr,sizeofArray,element);


        for(int i=0;i<sizeofArray;i++){

            cout<<arr[i]<<" ";

        }







    }
    return 0;
}