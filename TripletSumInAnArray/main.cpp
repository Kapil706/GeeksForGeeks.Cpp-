#include <iostream>
#include <algorithm>

using namespace std;
bool TripletSum(int arr[], int n, int k){
    sort(arr,arr+n);
    for(int i=0;i<n-2;i++)
    {

        int j=i+1;
        int y=n-1;

        while(j<y){
            int sum = arr[i]+arr[j]+arr[y];
            if(sum==k)
                return 1;
            else if(sum>k)
                y--;
            else if(sum<k)
                j++;
        }
    }
    return 0;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;

        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];

        }
        cout<<TripletSum(arr,n,k)<<endl;
    }
    return 0;
}