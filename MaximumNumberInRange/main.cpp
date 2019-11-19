#include <iostream>


using namespace std;

int arr[1000000];


int MaxInRange(int L[],int R[],int n,int maxx){

    for(int i=0;i<=maxx;i++){
     arr[i]=0 ;

    }

    for(int i=0;i<n;i++){

        arr[L[i]]++;
        arr[R[i]+1]--;

    }

    for(int i=1;i<maxx;i++){
        arr[i]  += arr[i-1];



    }

    int max=-1;
    for(int i=0;i<=maxx;i++){

        if(max<arr[i]){

            max=arr[i];
        }

    }

    for(int i=0;i<=maxx;i++){

        if(max==arr[i]){

            return i;
        }


    }









}


int main() {
    int t;
    cin>>t;
    while(t--){

        int n;
        cin>>n;
        int L[n];
        int R[n];

        for(int i=0;i<n;i++){

            cin>>L[i];
        }

        int maxx=0;

        for(int i=0;i<n;i++){

            cin>>R[i];

            if(maxx<R[i]){

                maxx=R[i];
            }

        }

        MaxInRange(L,R,n,maxx);



    }
    return 0;
}