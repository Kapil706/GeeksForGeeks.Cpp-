#include <iostream>

using namespace std;
int squareRoot(int x){

    if(x==0 || x==1)
        return  x;

    int start=1;
    int end=x;

    long mid=-1;

    while (start<=end){
        mid=start+end/2;

        if(mid*mid==x || (mid*mid<x && ((mid+1)*(mid+1))<x))
            return  mid;

        else if(mid*mid<x)
            start=mid+1;
        else
            end=mid-1;


    }
    return mid;







}

int main() {
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;

        cout<<squareRoot(x)<<endl;
    }
    return 0;
}