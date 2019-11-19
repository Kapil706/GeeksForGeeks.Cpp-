#include <iostream>

using namespace std;

int main() {
   string s;
   cin>>s;

   int count = 0;
   int n = s.length();
   for(int i=0;i<n;i++){
       if(s[i]==s[n-i-1])
       {
           count = 1;

       }
       else{
           count = 0;
           break;

       }

   }
   if(count==1){


       cout<<"YES";
   }else
   {
       cout<<"NO";
   }
    return 0;
}