// only function
#include <string>
using  namespace std;

bool areRotations(string s1,string s2)
{
    // Your code here

    int n=s1.length();
    int m=s2.length();

    if(n!=m)
        return false;

    // if(n<=2 || m<=2)
    //  return(s1==s2);


    string s= s1+s1;

    return (s.find(s2)!=-1);





}