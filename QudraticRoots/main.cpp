#include <bits/stdc++.h>

void quadraticRoots(int a, int i, int c);

using namespace std;

int main() {

    int t;
    cin>>t;
    while(t--){

        int a,b,c;
        cin>>a>>b>>c;

        quadraticRoots(a,b,c);
        cout<<endl;




    }
    return 0;


}

void quadraticRoots(int a, int i, int c) {



    int d;
    int x=0,y=0;

    d = (pow(i,2)-4*a*c);


    if(d<0){
        cout<<"Imaginary";
    }

    else{

        x = floor((-i + sqrt(d))/(2.0*a));
        y = floor((-i - sqrt(d))/(2.0*a));


        cout<<x<<" "<<y;




    }


}

