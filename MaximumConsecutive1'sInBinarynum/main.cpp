#include <iostream>

using namespace std;


int maxConsecutive(int n){

    int res=0;
    while(n>0){


        n=n&(n<<1);
        res++;


    }
    return res;





}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        cout<<maxConsecutive(n)<<endl;



    }
    return 0;
}