#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int median(int a[],int n){

       sort(a,a+n);


    for(int i=0;i<n;i++){

        if(n%2==0){

            return int((a[n/2]+a[(n/2)-1])/2);

        }
        else{

            return int(a[(n)/2]);

        }


    }

}
int mean(int A[],int N)
{
    //your code here

    int sum=0;

    int m=0;

    for(int i=0;i<N;i++){

        sum += A[i];
    }


    m = sum/N;

    return m;

}






























int main(){

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;
        int a[n];

        for(int i=0;i<n;i++){

            cin>>a[i];





        }
        cout<<mean(a,n)<<" "<<median(a,n)<<endl;




    }




return 0;
}


