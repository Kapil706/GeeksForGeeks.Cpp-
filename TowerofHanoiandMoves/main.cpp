#include <iostream>

using namespace std;

void toh(int n,int from,int to,int aux,int &moves){

    if(n==1){

        moves++;
        cout<<"move disk 1 from rod"<<from<<"to rod"<<to<<endl;


    }

    else{


        toh(n-1,from,aux,to,moves);
        cout<<"move disk"<<n<<"from rod"<<from<<"to rod"<<to<<endl;

        toh(n-1,aux,to,from,moves);
        moves++;



    }



}




int main() {
    int t;
    cin>>t;

    while(t--){
        int moves=0;
        int n;
        cin>>n;
        toh(n,1,3,2,moves);
        cout<<moves<<endl;






    }
    return 0;
}