#include <iostream>
#include<math.h>

using namespace std;


bool isPrime(int n){

    if(n<=1)
       return false; // not prime

    if(n<=3)
        return true; // 2 and 3 are prime numbers

    if(n%2==0 || n%3==0)
        return false;   // because number divided by 2 is not prime they are ever numbers and if divided by 3 it does not follow definition of prime



        // prime can be written in form of 6k+1 or 6k-1  except 2 and 3 only

    for(int i =5;i*i<=n;i=i+6){
        if(n%i==0 || n%(i+2)==0)
            return false;  // if number is divide by 6k-1 or 6k+1 then it will not be prime


        // time complexity O(sqrt(n))
    }

    return true ;  // all other numbers other than this will be prime















}








int main(){


    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        if(isPrime(n))
            cout<<"Yes";

        else
         cout<<"No";

        cout<<endl;












    }












    return 0;
}


