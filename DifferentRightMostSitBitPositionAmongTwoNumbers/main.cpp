#include <iostream>

#include <math.h>
using namespace std;

unsigned int DiffRightMostSetBit(int n,int m){

    int a;

    if(m==n)
        return -1;


    else
        a=n^m ; // XOR operation
        return log2(a & -a)+1;








}


int main() {
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;

        cout<<DiffRightMostSetBit(n,m)<<endl;



    }
    return 0;
}