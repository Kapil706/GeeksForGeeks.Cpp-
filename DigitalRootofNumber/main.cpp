#include <iostream>


using namespace std;



int digitalRoot(int n){

    if(n<10){ // n<10 means the number sum is smaller than 10 then that means the number is single digit and  can be returned


        return n;


    }

    else{

        return ((digitalRoot(n/10)+n%10)/10+(digitalRoot(n/10)+n%10)%10);




    }






}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        cout<<digitalRoot(n);




    }
    return 0;
}