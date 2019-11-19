#include <iostream>

using namespace std;

char getMAXChar(char* str){

    int max=-1;
    int index=0;
    int f[256]={0};

    for(int i=0;str[i]!='\0';i++){

        f[str[i]]++;

    }

    for(int i=0;i<256;i++){
        if(f[i]>max){
            max=f[i];
            index=i;
        }
    }
    return (char)index;



}

int main() {
    int t;
    cin>>t;
    char str[100];
    while(t--){

        cin>>str;
        cout<<getMAXChar(str)<<endl;
    }
    return 0;
}