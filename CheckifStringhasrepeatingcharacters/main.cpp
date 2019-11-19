#include <iostream>
using namespace std;



bool isIsogram(string s)
{
    //Your code here

    int d[256]={0};
    int n=s.length();
    for(int i=0;i<n;i++){
        d[s[i]]++;
    }
    int f=0;
    for(int i=0;i<n;i++){
        if(d[s[i]]>1){
            f=1;
            break;
        }

    }
    if(f==0){
        return 1;

    }
    else {
        return 0;
    }



}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}