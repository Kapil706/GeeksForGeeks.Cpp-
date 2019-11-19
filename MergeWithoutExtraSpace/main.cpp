#include <iostream>

using namespace std;
int newgap(int gap){
    if(gap<=1)
        return 0;
    else
         return (gap/2)+(gap%2);
}

void Merge(int arr[], int brr[], int n, int m){
    int i,j;
    int gap=n+m;

    for(gap=newgap(gap);gap>0;gap=newgap(gap)){

        for(i=0;i+gap<n;i++){
            if(arr[i]>arr[i+gap]){
                swap(arr[i],arr[i+gap]);
            }
        }

        for(j=(gap>n)?gap-n:0; i<n && j<m ;i++,j++){
            if(arr[i]>brr[j]){
                swap(arr[i],brr[j]);
            }
        }

        if(j<m){
            for(j=0;j+gap<m;j++) {
                if (brr[j] > brr[j + gap]) {
                    swap(brr[j], brr[j + gap]);
                }
            }
        }




    }

}


int main() {
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int arr[n],brr[m];
        for(int i=0;i<n;i++){
            cin>>arr[i];

        }
        for(int j=0;j<m;j++){
            cin>>brr[j];
        }

        Merge(arr,brr,n,m);
        for(int i=0;i<n+m;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}