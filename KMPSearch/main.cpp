#include <iostream>
using namespace std;

void ComputeLpsArray(string pat, int m, int*lps){
    lps[0]=0;
    int i=1;
    int len=0;
    while (i<m){
        if(pat[i]==pat[len]){
            len++;
            lps[i]=len;
            i++;
        }
        else{
            if(len!=0){
                len=lps[len-1];
            }
            else{
                lps[i]=0;
                i++;
            }
        }

    }
}
bool KMPsearch(string pat, string txt){

    int i=0,j=0;
    int m=pat.length();
    int n=txt.length();
    int lps[m];

    ComputeLpsArray(pat,m,lps);

    while(i<n && j<m){

        if(pat[j]==txt[i]){
            i++;
            j++;
        }
        else if(i<n && pat[j]!=txt[i]){
            if(j!=0){
                j=lps[j-1];
            }
            else{
                i++;
            }
        }





    }
    return (j==m)?true: false;











}


int main() {
    int t;
    cin>>t;
    while(t--){
        string pat;
        string txt;
        cin>>pat>>txt;

        if(KMPsearch(pat,txt)){
            cout<<"Yes";
        }
        else{
            cout<<"No";
        }
    }
    return 0;
}