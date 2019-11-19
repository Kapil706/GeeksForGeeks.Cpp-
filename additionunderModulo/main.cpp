#include <iostream>

using namespace std;

int addUnderModulo(long long a, long long b){
    int m = 1000000007;

    long sum=0;

    sum = ((a%m)+(b%m))%m;

    return sum;


}


int main() {
    int t;
    cin>>t;
    while(t--){
        long long a;
        long long b;
        cin>>a>>b;

        cout<<addUnderModulo(a,b);

    }
    return 0;
}