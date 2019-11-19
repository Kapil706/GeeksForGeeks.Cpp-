#include <iostream>
#include <vector>
using namespace std;
typedef vector<int> Vector;


Vector print(const Vector& a){
    for(auto e:a){
        cout<<e<<" ";
    }
    cout<<endl;
}


Vector MergeThree(Vector& A, Vector& B,Vector& C){
    int i,j,k,m,n,o;
    n=A.size();
    m=B.size();
    o=C.size();

    Vector D;
    D.reserve(m+n+o);

    while(i<n && j<m && k<o){
        int minn = min(A[i],B[i],C[i]);

        if(minn==A[i])
            i++;
        else if(minn==B[i])
            j++;
        else
            k++;
    }


    while(i<n && j<m){
        if(A[i]<=B[j]){
            D.push_back(A[i]);
            i++;}

        else{
            D.push_back(B[j]);
            j++;
        }
    }

    while(i<n && k<o){
        if(A[i]<=C[k]){
            D.push_back(A[i]);
           i++;}
        else{
            D.push_back(C[k]);
            k++;
        }
    }

    while(j<m && k<o){
        if(B[j]<=C[k]){
            D.push_back(B[j]);
            j++;
        }
        else{
            D.push_back(C[k]);
            k++;
        }
    }


    while(k<o){
        D.push_back(C[k++]);
    }

    while(i<n){
        D.push_back(A[i++]);
    }
    while(j<m){
        D.push_back(B[j++]);
    }

    return D;
}




int main() {
    int t;
    cin>>t;
    while(t--){
        Vector A,B,C;
        for(int i=0;i<A.size();i++){
            int x;
            cin>>x;
            A.push_back(x);
        }
        for(int i=0;i<B.size();i++){
            int x;
            cin>>x;
            B.push_back(x);
        }
        for(int i=0;i<C.size();i++){
            int x;
            cin>>x;
            C.push_back(x);
        }

        print(MergeThree(A,B,C));

    }
    return 0;
}