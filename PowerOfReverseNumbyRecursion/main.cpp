#include <iostream>

using namespace std;
#define mod 1000000007;



long long Rev(long long n){

    long long y=0;

    while(n>0){

        y = y*10+n%10;

        n = n/10;



    }

    return y;




}


long long power(int n,int r){

    if(r==0){

        return 1;

    }
    else{

        return (n*power(n,r-1))%mod;
    }






}


int main() {
    int t;
    cin>>t;
    while(t--){
        long long n ;
        cin>>n;
        long long r=0;

        r = Rev(n);

        long long s = power(n,r);

        cout<<s<<endl;





    }
    return 0;
}