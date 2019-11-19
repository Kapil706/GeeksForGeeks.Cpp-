#include <bits/stdc++.h>
using namespace std;




int anagram(string s1, string s2){



    int count=0;
    int n1= s1.length();
    int n2= s2.length();

    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){

            if(s1[i]==s2[j]){

                count++;
                s2[j]='*';

                break;


            }

        }
    }

    return (n1+n2-(2*count));




















}

int main() {
    int t;
    cin>>t;
    while(t--){

        string s1,s2;
        cin>>s1>>s2;

        cout<<anagram(s1,s2);










    }
    return 0;
}