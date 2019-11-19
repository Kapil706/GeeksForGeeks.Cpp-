#include <iostream>


void reverseWords(char *s) {

    string str(s);
    int start=0;
    for(int i=0;i<str.length();i++){
        if(str[i]=='.'){

            reverse(str.begin()+start,str.begin()+i);
            start=i+1;


        }


    }
    reverse(str.begin()+start,str.end());
    reverse(str.begin(),str.end());
    cout<<str;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}