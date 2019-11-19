#include <iostream>

using namespace std;
struct Node{
    int data;
    struct Node *next;
    Node(int d){
        data=d;
        next=NULL;
    }
};

void printList(struct Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<' ';
        curr=curr->next;
    }
    cout<<endl;
}

Node *insertAtEnd(Node *head, int data){
    if(head==NULL){
        return new Node(data);
    }
    Node *curr=head;
    while(curr!=NULL && curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=new Node(data);
    return head;

}

Node *insertAtBegin(Node *head, int data){

    Node *temp= new Node(data);
    temp->next = head;
    return temp;


}






int main() {
    int t;
    cin>>t;

    while(t--)
    {Node *head=NULL;
    int n;
    cin>>n;
    int tmp,ch;
    cin>>tmp>>ch;

    if(ch) head=insertAtEnd(head,tmp);
    else head=insertAtBegin(head,tmp);
    printList(head);
    }

    return 0;
}