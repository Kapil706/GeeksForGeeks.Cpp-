#include <iostream>
#define SIZE 100
using namespace std;

void sumTriangles(int n, int mat[SIZE][SIZE]){

    // Your code here
    int sumd=0;
    int sum1=0;
    int sum2=0;
    int sumu=0;
    int suml=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                sumd += mat[i][j];
            }
        }
    }

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            sum1 += mat[i][j];

        }
    }

    for(int i=n-1;i>=1;i--){
        for(int j=0;j<n-1;j++){
            // sum2 += mat[i][j];
            if(i==j){
                break;
            }
            else{
                sum2 += mat[i][j];
            }
        }
    }

    sumu = sumd+sum1;
    suml = sumd+sum2;
    cout<<sumu<<" "<<suml;

}


int main() {

        int t;
        cin>>t;
        while(t--)
        {
            long int r,n,c;
            cin>>n;
            r=n;
            c=r; //Since the matrix is a square matrix, number of cols=number of rows
            int i,j,mat[SIZE][SIZE];
            for(i=0;i<r;i++)
            {
                for(j=0;j<c;j++)
                    cin>>mat[i][j];
            }

            sumTriangles(r, mat);

            cout<<endl;
        }
        return 0;


}