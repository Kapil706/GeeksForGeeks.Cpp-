#include <iostream>
#include <stdlib.h>
#include <queue>

using namespace std;

struct Node{
    int data;
    Node *next;
}*front=NULL,*rear=NULL;



void queued(int x){
      struct Node *t;
      t=(struct Node*)malloc(sizeof(struct Node));

      if(t==NULL){
          cout<<"Queue is full\n";

      }

      else{
          t->data=x;
          t->next=NULL;

          if(front=NULL){
              front=rear=t;
              rear=t;

          }
          else{
              rear->next=t;
              rear=t;

          }



      }




}


int dequeue(){


    int x=-1;
    struct Node* t;

    if(front=NULL){
        cout<<"Queue is full\n";

    }
    else{

        x=front->data;
        t=front;
        front=front->next;
        free(t);






    }
    return x;

}

int isEmpty(){
    return front ==NULL;
}



void BFS(int start, int n, int G[][7])
{

    int i=start;
    int visited[7]={0};


    cout<<i;
    visited[i]=1;
    queued(i);

    while(!isEmpty()){

        i=dequeue();

        for(int j=1;j<=n;j++){
            if(G[i][j]==1 && visited[j]==0){
                cout<<j;
                visited[j]=1;
                queued(j);
            }
        }
    }

}



//void DFS(int start, int n, int G[][7]){
//
//    int j;
//    static int visited[7]={0};
//
//    if(visited[start]==0){
//        cout<<start;
//        visited[start]=1;
//
//        for(j=1;j<n;j++){
//
//            if(G[start][j]==1 && visited[j]!=0){
//                DFS(j,n,G);
//            }
//
//        }
//
//
//
//
//
//    }
//
//
//
//
//}


int main() {

    int G[7][7]={{0,0,0,0,0,0,0},
                 {0,0,1,1,0,0,0},
                 {0,1,0,0,1,0,0},
                 {0,1,0,0,1,0,0},
                 {0,0,1,1,0,1,1},
                 {0,0,0,0,1,0,0},
                 {0,0,0,0,1,0,0}};



    BFS(1,7,G);

   // DFS(1,7,G);






    return 0;
}