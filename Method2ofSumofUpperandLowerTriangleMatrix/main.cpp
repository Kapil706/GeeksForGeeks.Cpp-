#include <iostream>
#define SIZE 100

using namespace std;

void sumTriangles(int r, int mat[SIZE][SIZE]){

    int sumu=0;
    int suml=0;

    for(int i=0;i<r;i++){
        for(int j=i;j<r;j++){

            sumu += mat[i][j];

            suml += mat[r-1-i][r-1-j];



        }
    }

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