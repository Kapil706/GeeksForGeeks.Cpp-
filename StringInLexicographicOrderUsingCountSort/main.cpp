#include <iostream>
using namespace std;

void CountSort(char arr[]){
    int t[27]={0},x=0;
    for(int i=0;arr[i]!='\0';i++){
      t[arr[i]-'a']++;
      x++;
    }

    for(int i=1;i<=26;i++){
        t[i] += t[i-1];
    }
    int v[x+1];
    for(int i=0;arr[i];i++){
      v[t[arr[i]-'a']-1]=arr[i];
      t[arr[i]-'a']--;
    }

    for(int i=0;arr[i];i++){
        arr[i]=v[i];
    }


}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char arr[n+1];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        CountSort(arr);

        for(int i=0;arr[i];i++){
            cout<<arr[i];
        }

    }
    return 0;
}