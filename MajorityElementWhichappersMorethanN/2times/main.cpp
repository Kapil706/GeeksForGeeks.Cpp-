#include <iostream>
using namespace std;
int MajorityElement(int arr[], int n){

    for(int i=0;i<n/2;i++){
        int count=0;
        for(int j=0;j<n;j++){
            count=(arr[i]==arr[j])?count+1:count;
        }
        if(count>n/2)
            return arr[i];


    }
    return -1;

}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }


        cout<<MajorityElement(arr,n)<<endl;
    }
    return 0;
}