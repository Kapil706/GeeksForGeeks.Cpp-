#include <iostream>
#define Size 50

using namespace std;
// first i will traverse first row
// then last column
// then last row
// then first column

void BoundaryTraversal(int n, int m, int arr[Size][Size]) {


    for (int i = 0; i < m; i++) {    // first row
        cout << arr[0][i] << " ";
    }

    for (int i = 1; i < n; i++) {   // last column
        cout << arr[i][m - 1] << " ";
    }

    if (n > 1)
        for (int i = m - 2; i >= 0; i--) { // last row
            cout << arr[n - 1][i] << " ";
        }

    if (m > 1){
        for (int i = n - 2; i > 0; i--) {  // first column
            cout << arr[i][0] << " ";
        }

}














}







int main() {
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int arr[Size][Size];
        for(int i=0;i<n;i++) {
            for (int j = 0; j < n; ++j) {
                cin >> arr[i][j];
            }
        }

        BoundaryTraversal(n,m,arr);
        cout<<endl;

    }












    return 0;
}