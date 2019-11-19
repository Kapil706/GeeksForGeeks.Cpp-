#include <iostream>
#include<math.h>

using namespace std;


double termofGp(int a,int b,int n){

    double term;
    double commonratio = ((double) b / (double) a);

    double power = pow(commonratio,n-1);

    term = (a*power);

    return term;








}








int main(){


    int t;
    cin>>t;
    while(t--){

        int a,b;
        cin>>a>>b;
        int n;
        cin>>n;

        cout<<floor(termofGp(a,b,n));






    }


    return 0;
}