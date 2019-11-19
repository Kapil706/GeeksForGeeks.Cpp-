#include <iostream>
#include <vector>

using namespace std;


vector<long long>ReverseArrayinGroup(vector<long long>mv,int n, int k){

    for(int i=0;i<n;i=i+k){
        int l=i;
        int r=min(i+k-1,n-1);


        while(l<r){
            swap(mv[l++],mv[r--]);
        }




    }
    return mv;






}

int main() {
   int t;
   cin>>t;
   while(t--){

       int n;
       cin>>n;

       vector<long long>mv;
       int k;
       cin>>k;

       for(int i=0;i<n;i++){
           int x;
           cin>>x;
           mv.push_back(x);

       }

       mv = ReverseArrayinGroup(mv,n,k);

       for(int i=0;i<n;i++){

           cout<<mv[i]<<" ";
           cout<<endl;
       }

   }
    return 0;
}