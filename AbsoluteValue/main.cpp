#include <iostream>

int absolute(int i);

using namespace std;



int main() {
    int t;
    cin>>t;
    while(t--){

        int i;
        cin >> i;

        cout<<absolute(i)<<endl;




    }
    return 0;
}

int absolute(int i) {



    // there are two ways one is using built in function abs()

  // return abs(i);

    // second one is
    if(i<0){
        return -i;

    }

    return  i;

}