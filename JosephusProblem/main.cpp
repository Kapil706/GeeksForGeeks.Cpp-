#include <iostream>

using namespace std;



int jos(int n,int k){

    if(n==1){
        return n;
    }

    else{

        return (jos(n-1,k)+k-1)%n+1;
    }





}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int k;
        cin>>k;

        cout<<jos(n,k);



    }
    return 0;
}