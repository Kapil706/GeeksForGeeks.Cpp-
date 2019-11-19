#include <iostream>
struct Node{
    int data;
    Node *next;
    Node(int x){
        data=x;
        next=NULL;
    }
};

using namespace std;
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

bool areIdentical(struct Node *head1, struct Node *head2)
{
    // Code here



    int f=0;


    while(head1!=NULL && head2!=NULL){
        if(head1->data!=head2->data){
            f=0;
            break;
        }
        else {
            f=1;
        }
        head1=head1->next;
        head2=head2->next;

    }
    if(f==0)
        return false;
    else
        return true;

}