#include <iostream>

bool checkBit(int n,int k){

    return (n==0 || (n&(1<<k))==0)?false:true;
}

using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int k;
        cin>>k;


        if(checkBit(n,k))
            cout<<"Yes"<<endl;

        else
            cout<<"No"<<endl;
    }
    return 0;
}