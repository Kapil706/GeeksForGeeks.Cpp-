#include <bits/stdc++.h>

using namespace std;




void PrimeUptoN(int n){

    bool Prime[n+1];
    memset(Prime, true, sizeof(Prime));

    for(int p=2;p*p<=n;p++){

        if(Prime[p]==true)
        {

            for(int i=p*p;i<=n;i=i+p){

                Prime[i]=false;



            }


        }




    }

    for(int p=2;p<=n;p++){

        if(Prime[p])
            cout<<p<<" ";

    }






}

int main() {
    int n;
    cin>>n;

    PrimeUptoN(n);
    return 0;
}