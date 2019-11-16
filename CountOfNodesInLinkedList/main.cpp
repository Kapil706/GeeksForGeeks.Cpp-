#include <iostream>

using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int x){
        data=x;
        next=NULL;

    }
};



void insert(struct Node** head, int data){

    Node *temp= new Node(data);
    temp->next=*head;
    *head=temp;



}

int getcount(Node* head){
    if(head==NULL){
        return 0;
    }

    int count=0;
    struct Node *curr=head;
    while(curr!=NULL){
        count++;
        curr=curr->next;
    }
    return count;
}





int main() {

    int t,i,l,n;
    cin>>t;
    while(t--){
        struct Node *head=NULL;

        cin>>n;
        for(i=1;i<=n;i++){
            cin>>l;
            insert(&head,l);
        }

        cout<<getcount(head)<<endl;

    }





    return 0;
}