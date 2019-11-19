#include <iostream>

using namespace std;


void multiply(int *a,int &n,int no){

    int carry = 0;

    for (int i=0;i<n;i++){

        int product = a[i]*no + carry;

        a[i] = product%10;
        carry = product/10;



    }

    while(carry){

        a[n]=carry%10;
        carry = carry/10;

        n++;




    }





}






void bigfactorial(int number){






    int *a = new int[1000]{0};

    a[0]=1;

    int n=1;


    for (int i =2 ; i<=number;i++){


        multiply(a,n,i);


    }
    int count=0;

    for(int i = n-1;i>=0;i--){

       // int count = 0;

        cout<<a[i];
        //int size = *(&a + 1) - a;
       // cout<<size;
     //  cout<<"\n"<<n;


     count++;








    }

    cout<<"\n"<<count;



//    int size = *(&a + 1) - a;
//    cout<<"\n"<<size;

    cout<<endl;















}







int main(){

    bigfactorial(100);

    return 0;



}