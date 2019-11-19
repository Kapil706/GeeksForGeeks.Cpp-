


#include <iostream>
using namespace std;


//int ASCI;
//int main()
//{
//    char ch='a';
//    ASCI=ch;
//    while(ch<='z')
//    {
//        while(ASCI<=ch)
//        {
//            cout<<"The ASCI code of "<<ch<<" is ="" "<<ASCI<<endl;
//            ASCI++;
//        }
//        ch++;
//    }
//}



#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin>>t;
    int g,p;
    int n;
  //  float answer=0.0;

    while(t--){
        cin>>g>>p;
        cin>>n;
        int ar[n][2];
        int answer1=0;
        int answer2=0;


        for(int i=0;i<n;i++){

            for(int j=0;j<2;j++){

                cin>>ar[i][j];
                if(j==0){

                    answer1 += ar[i][j]*g;
                    answer2 += ar[i][j]*p;

                }

                if(j==1){

                    answer1 += ar[i][j]*p;
                    answer2 += ar[i][j]*g;



                }





            }
        }

        if(answer1<answer2){
            cout<<answer1<<endl;
        }

        else{
            cout<<answer2<<endl;
        }





    }

}
