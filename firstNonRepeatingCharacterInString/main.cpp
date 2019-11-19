#include <iostream>


using namespace std;

char nonrepeatingCharacter(string S)
{
    //Your code here

    int f[256]={0};

    int i;
    for( i=0;i<S.length();i++){
        f[S[i]]++;
    }

    for(i=0;i<S.length();i++){
        if(f[S[i]]==1)
            return S[i];
    }
    return '$';



}