#include <iostream>
#include <math.h>

using namespace std;


unsigned int PosRightMostfirstSetBit(int n){

    if(n==0)
        return 0;
    else
        return log2(n-(n&(n-1)))+1;





}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        printf("%u",PosRightMostfirstSetBit(n));
        printf("\n");
    }
    return 0;
}