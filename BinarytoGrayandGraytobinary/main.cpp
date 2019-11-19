#include <iostream>

using namespace std;


int BinarytoGray(int n){

    return n^(n>>1);





}

int GraytoBinary(int n){

    int res=0;

    while(n>0){

        res= res^n;
        n= n>>1;




    }
    return res;


}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        cout<<BinarytoGray(n)<<endl;
        cout<<GraytoBinary(n)<<endl;

    }
    return 0;
}