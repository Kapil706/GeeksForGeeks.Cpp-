#include <iostream>

using namespace std;

int strStr(string a, string b){
    int n=a.length();
    int m=b.length();

    for(int i=0;i<=n-m;i++){
        int j;
        for(int j=0;j<m;j++){
            if(a[i+j]!=b[j]){
                break;
            }
        }
        if(j==m){
            return i;
        }
    }
    return -1;
    
}

// works for distinct pattern // naive appraoch
bool search(string pat, string txt)
{

    // Your code here
    int m=pat.length();
    int n=txt.length();

    int i,j;
    for(i=0;i<=n-m;i++){

        for(j=0;j<m;j++){
            if(txt[i+j]!=pat[j]){
                break;
            }

            else if(txt[i+j]==pat[j] && j==m-1){
                return true;
            }
        }

    }
    return false;

}

int main() {
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a;
        cin>>b;

        cout<<strStr(a,b)<<endl;
    }
    return 0;
}