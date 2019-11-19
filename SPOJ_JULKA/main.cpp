//
//#include <iostream>
//using namespace std;
//
//int main() {
//    // your code goes here
//    int t;
//    cin>>t;
//    while(t--){
//        long double n;
//        long double z;
//        float x;
//        cin>>n;
//        cin>>z;
//        x=(n-z)/2;
//
//        cout<<x+z<<endl;
//        cout<<x<<endl;
//
//
//
//
//
//
//    }
//    return 0;
//}

#include <iostream>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin>>t;
    while(t--){

        int n[1000];
        int z[1000];

        int x[1000];

        int i;

        for( i=0;i<1;i++){

            cin>>n[i];
            cin>>z[i];

            x[i]=(n[i]-z[i]);
            x[i]=x[i]/2;


        }
        // cin>>n;
        // cin>>z;

        // x=(n-z)/2;

        cout<<x[i]+z[i]<<endl;
        cout<<x[i];






    }
    return 0;
}


