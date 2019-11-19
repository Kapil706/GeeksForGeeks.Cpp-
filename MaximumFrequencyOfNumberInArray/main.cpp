#include <iostream>
using namespace std;


int MaxFrequency(int arr[],int n, int x, int y){

    int countx=0;
    int county=0;


    for(int i=0;i<n;i++){

        if(arr[i]==x)
            countx++;
        else if(arr[i]==y)
            county++;





    }

    if(countx>county)

        return x;

    if(county>countx)

        return y;

    else{

        if(x<y)
            return x;
        else
            return y;


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

            cin>>arr[n];
        }
        int x,y;
        cin>>x>>y;

        cout<<MaxFrequency(arr,n,x,y);



    }
    return 0;
}