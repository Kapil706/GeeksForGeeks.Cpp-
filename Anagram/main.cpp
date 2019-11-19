#include <iostream>
using namespace std;

// only function

bool isAnagram(string c, string d){
    
    // Your code here
    int n=c.length();
    int m=d.length();
    
    if(n!=m){
        return false;
        
    }
    
    int arr[256]={0};
    
    for(int i=0;i<n;i++){
        arr[c[i]]++;
    }
    
    for(int i=0;i<n;i++){
        arr[d[i]]--;
    }
    
    for(int i=0;i<256;i++){
        if(arr[i]>0){
            return false;
        }
    }
    return true;
    
    
    
    
}
