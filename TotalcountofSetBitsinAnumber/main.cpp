#include <iostream>
using namespace std;


int CountBits(int n){

    int res=0;
    for(int i=1;i<=n;i++){
        int num=i;

        while(num>0){

            num = num&(num-1);

            res++;



        }



    }
    return res;





}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        cout<<CountBits(n)<<endl;




    }
    return 0;
}