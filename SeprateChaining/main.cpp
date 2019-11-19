#include <iostream>
#include <vector>

using namespace std;

void SeprateChaining(vector<vector<int>> &hashTable,int m, int n, int arr[]){

    for(int i=0;i<n;i++){
        int hashIndex=arr[i]%m;

        hashTable[hashIndex].push_back(arr[i]);
    }



}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int m;
        cin>>m;
        vector<vector<int>>hashTable(m);
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }


        SeprateChaining(hashTable,m,n,arr);

        for(int i=0;i<hashTable.size();i++){
            if(hashTable[i].size()>0){
                cout<<i<<"->";
                for(int j=0;j<hashTable.size()-1;j++){
                    cout<<hashTable[i][j]<<"->";
                }
                cout<<hashTable[i][hashTable[i].size()-1];
                cout<<endl;
            }
        }
    }
    return 0;
}