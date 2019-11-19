#include <iostream>

using namespace std;
struct Node{
    int data;
    Node *next;
    Node *prev;
    Node(int x){
        data=x;
        next=prev=NULL;
    }
};

Node *Insert(Node *head, int data){
    if(head==NULL)
         return new Node(data);

    Node *curr=head;
    while(curr->next!=NULL){
        curr=curr->next;

    }
    Node *temp=new Node(data);
    curr->next=temp;
    temp->prev=curr;
    return head;

}

void addNodeafterP(Node *head,int data, int pos){
    Node *temp= new Node(data);
    if(head==NULL)
    {
        head=temp;
        return;
    }
    else{
        Node *curr=head;
        for(int i=0;i<pos;i++){
            curr=curr->next;
        }
        if(curr->next==NULL){
            curr->next=temp;
            temp->prev=curr;
        }
        else{
            curr->next->prev=temp;
            temp->next=curr->next;
            temp->prev=curr;
            curr->next=temp;
        }



    }








}














void printlist(struct Node *head){

   Node *temp=head;
   if(temp!=NULL){
       while(temp->next!=NULL){
           temp = temp->next;

       }
       while(temp->prev!=NULL){
           temp=temp->prev;

       }

       while(temp!=NULL){
           cout<<temp->data<<' ';
           temp=temp->next;
       }

       cout<<endl;
   }
}

int main() {
    int t;
    while(t--){
        Node *head=NULL;
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            head=Insert(head,x);
        }
        int pos,data;
        cin>>pos>>data;
        addNodeafterP(head,data,pos);
        printlist(head);

    }
    return 0;
}