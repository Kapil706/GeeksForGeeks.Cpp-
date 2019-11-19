#include <iostream>

using namespace std;

void Intersection(int arr[], int brr[], int n, int m){
    int i=0;
    int j=0;
    while(i<n && j<m){

        if(arr[i]==brr[j]){
            if((i==0 || arr[i]!=arr[i-1])&&(j==0 || brr[j]!=brr[j-1]))
                cout<<arr[i]<<" ";
            i++;
            j++;
        }
        else if(arr[i]<brr[j]){
            i++;
        }
        else if(arr[i]>brr[j]){
            j++;
        }
        else{
            cout<<-1;
        }
    }

}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int arr[n];
        int brr[m];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int j=0;j<m;j++){
            cin>>brr[j];
        }

        Intersection(arr,brr,n,m);
        cout<<endl;
    }
    return 0;
}