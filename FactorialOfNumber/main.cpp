#include <bits/stdc++.h>
using namespace std;


int factorial(int n);

int main() {

    int t;
    cin>>t;

    while(t--){

        int n ;
        cin>>n;

        cout<< factorial(n);





    }




    return 0;
}


int factorial(int n){


    if(n==0){


        return 1;

    }


    return n*factorial(n-1);




}