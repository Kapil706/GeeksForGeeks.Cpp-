#include <iostream>


using namespace std;

bool isSparseNum(int n){


    if((n&(n>>1)!=0))
    {
        return false; }
    else
    { return true;}







}



int main() {
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        if(isSparseNum(n))
            cout<<"1"<<endl;

        else
            cout<<"0"<<endl;


    }

    return 0;
}