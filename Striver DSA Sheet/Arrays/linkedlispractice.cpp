#include<iostream>
using namespace std;
struct node{
    int data;
    struct node*next;
};
void traversal(int*head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head =head->next;
    }
}
int main(){
    struct node * head,*one ,*two,*third,*four,*five;
    head=(struct node *)malloc(sizeof(struct node));
    one=(struct node *)malloc(sizeof(struct node));
    two=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));
    four=(struct node *)malloc(sizeof(struct node));
    five=(struct node *)malloc(sizeof(struct node));
head->data=1;
head->next=one;
one->data=3;
one->next=two;
two->data=4;
two->next=third;
third->data=7;
third->next=four;
four->data=8;
four->next=five;
five->data=100;
five->next=NULL;
traversal(head);

    return 0;
}