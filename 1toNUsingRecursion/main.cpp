#include <iostream>

using namespace std;




void oneToN(int n)
{

    if(n<=1){

       cout<<1<<" ";

    }
    else{

        oneToN(n-1);
        cout<<n<<" ";


    }



}

int main() {
    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        oneToN(n);



    }
    return 0;
}