#include <iostream>
using namespace std;



int ModuloInverse(int a,int m){

    int x;

    a=a%m;

    for(int x=1;x<m;x++){


        if ((a*x)%m ==1){



            return x;
        }




    }

    return -1;





}

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,m;
        cin>>a>>m;

        cout<<ModuloInverse(a,m);



    }
    return 0;
}