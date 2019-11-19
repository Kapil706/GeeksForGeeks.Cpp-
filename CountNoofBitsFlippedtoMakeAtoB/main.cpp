#include <iostream>
using namespace std;
int FlipToConvert(int n,int m){

    int c;

    c=n^m;  // XOR operation
             // counting the no of set bits // those set bits are equal to no of flipped bits
    int res=0;

    while(c>0){

        c=c&(c-1);


        res++;



    }

    return res;






}

int main() {
    int t;
    cin>>t;
    while(t--){

        int n;
        cin>>n;
        int m;
        cin>>m;

        cout<<FlipToConvert(n,m)<<endl;





    }
    return 0;
}