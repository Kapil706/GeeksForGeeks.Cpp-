#include <bits/stdc++.h>

double ctoF(int c);

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int c,f;
        cin>>c;



        cout<<floor(ctoF(c))<<endl;


    }
    return 0;
}

double ctoF(int c) {
    return c*9/5+32;
}