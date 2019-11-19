#include <iostream>

using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x){
        data=x;
        next=NULL;
    }
};

void displaylist(Node *head){

    if(head!=NULL){
        Node *curr=head;
        while(curr!=NULL){
            cout<<curr->data<<' ';
            curr=curr->next;

        }
        cout<<endl;
    }
}


void append(Node **head, Node **tail, int data){
    Node *temp=new Node(data);
    if(*head==NULL){
        *head=temp;
    } else{
        (*tail)->next=temp;
    }
    *tail=temp;
}

Node *InsertMiddle(Node *head, int data){
    Node *temp=new Node(data);

    Node *slow=head,*fast=head;

    while(fast->next!=NULL && fast->next->next!=NULL){
        slow= slow->next;
        fast= fast->next->next;
    }

    Node *next = slow->next;
    temp->next=next;
    slow->next=temp;
    return head;
}





int main() {


    int t;
    cin>>t;
    while(t--){
        Node *head=NULL,*tail=NULL;
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            int l;
            cin>>l;
            append(&head,&tail,l);
        }
        int x;
        cin>>x;
        head=InsertMiddle(head,x);
        displaylist(head);
    }





    return 0;
}