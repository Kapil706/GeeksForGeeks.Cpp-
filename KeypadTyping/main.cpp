#include <iostream>
using namespace std;
string Keypad(string s){

    int n=s.length();
    // for(int i=2;i<=9;i++){

    // }
    string str[] = {"2", "2", "2", "3", "3", "3",
                    "4", "4", "4", "5", "5", "5", "6", "6", "6",
                    "7", "7", "7", "7", "8", "8", "8", "9", "9", "9", "9"};
    string ans="";
    for(int i=0;i<n;i++){
        if(s[i] == ' '){
            ans = ans+"0";
        }
        else{
            int pos=s[i]-'a';
            ans=ans+str[pos];
        }
    }
    return ans;


}

int main() {
    //code
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<Keypad(s)<<endl;
    }
    return 0;
}