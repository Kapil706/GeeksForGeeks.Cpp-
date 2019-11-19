#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin>>n;
    int ar[n];
    long answer=1;
    int m = (int)pow(10,9)+7;
    for(int i=0;i<n;i++){

        cin>>ar[i];

        // answer = (answer*ar[i])%m;
        // now modulo hold distributive property so it distributes over both of the operands


        answer = ((answer%m)*ar[i])%m;


    }
    cout<<answer;
    return 0;
}