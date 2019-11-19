#include <iostream>
#include<math.h>

using namespace std;

int digitInFact(int n){


    double sum = 0.0;

    for(int i=1;i<=n;i++){



        sum = sum+log10(i);



    }
    return (1+floor(sum));







}




int main(){

    int t;

    cin>>t;
    int n;
    while(t--){

        cin>>n;

        cout<<digitInFact(n)<<endl;





    }

    return 0;


}