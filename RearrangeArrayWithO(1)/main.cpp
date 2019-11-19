#include <iostream>

using namespace std;


// arr[] = {1,2,3,4,5,6}
// o/P : arr[6,1,5,2,4,3]
// first max, first min , second max, second min , third max , third min

void Rearrange(int *arr,int n){

    int min=0;
    int max=n-1;
    int maxTerm = arr[n-1]+1;

    for(int i=0;i<n;i++){

        if(i%2==0){

            arr[i]   += (arr[max]%maxTerm)*maxTerm;
            max--;
        }
        else{

            arr[i] += (arr[min]%maxTerm)*maxTerm;
            min++;
        }


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

        Rearrange(arr,n);


    }
    return 0;
}