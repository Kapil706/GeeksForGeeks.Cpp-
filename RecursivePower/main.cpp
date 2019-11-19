#include <iostream>

using namespace std;

int RecursivePower(int n,int p){


    if(p==0)
        return 1;

    else
        return n*RecursivePower(n,p-1);




}

int main() {

    int t;
    cin>>t;
    while(t--){

        int n;
        cin>>n;
        int p;
        cin>>p;

        cout<<RecursivePower(n,p);





    }
    return 0;
}