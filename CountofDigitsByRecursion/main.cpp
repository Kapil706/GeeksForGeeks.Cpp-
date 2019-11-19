#include <iostream>

using namespace std;


int countDigits(int n){

    if(n==0){

        return 0;
    }

    else{



        return 1+countDigits(n/10);
    }






}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;


        cout<<countDigits(n);




    }
    return 0;
}