#include <iostream>

using namespace std;

void linearProbing(int hash[], int hashSize, int arr[], int n) {

    for (int i = 0; i < n; i++) {
        int j = 0;
        int x = arr[i];
        int h = x % hashSize;

        if (hash[(h + j) % hashSize] == -1) {
            hash[h] = x;

        } else if (hash[(h + j) % hashSize] != -1) {
            while (hash[(h + j) % hashSize] != -1) {
                j++;

            }

            if (hash[(h + j) % hashSize] == -1) {
                hash[(h + j) % hashSize] = x;
            }
        }
        if (n < hashSize) {
            n = hashSize;
        }

    }

}
    void QuadraticProbing(int hash[], int hashSize, int arr[], int n){

        for(int i=0;i<n;i++){
            int j=0;
            int x=arr[i];
            int h=x%hashSize;

            if(hash[(h+(j*j))]==-1){
                hash[h]=x;

            }
            else if(hash[(h+(j*j))%hashSize]!=-1){
                while(hash[(h+(j*j))%hashSize]!=-1){
                    j++;

                }

                if(hash[(h+(j*j))%hashSize]==-1){
                    hash[(h+(j*j))%hashSize]=x;
                }
            }

        }
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int hashsize;
        cin>>hashsize;
        int hash[hashsize];

        int n;
        cin>>n;
        int arr[n];

        for(int i=0;i<hashsize;i++){
            hash[i]=-1;
        }

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        linearProbing(hash,hashsize,arr,n);



        for(int i=0;i<hashsize;i++){
            cout<<hash[i]<<" ";
        }
        cout<<endl;

        QuadraticProbing(hash,hashsize,arr,n);

        for(int i=0;i<hashsize;i++){
            cout<<hash[i]<<" ";
        }
        cout<<endl;

    }
    return 0;
}