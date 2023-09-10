#include<iostream>
using namespace std;

// struct node{
    
//     int data;
//     struct node * next;
// };
// void traversal(struct node* ptr){
//     while(ptr!=NULL){
//     cout<<ptr->data<<" ";
//     ptr=ptr->next;
//     }

// }
// struct node{
//     int data;
//     struct node* next;
// };
class node
{
    public:
    int data;
    node* next;
    node()
    {
        (node*)malloc(sizeof(node));
    }
};
void traverse(node* head )
{
    while(head != NULL)
    {
        cout<<head->data<<" -> ";
        head->next ++;
    }
}
int main(){
    // struct node * head,*one,*two,*third;
    // struct node * one;
    // struct node * two;
    // struct node * third;
    // head=(struct node *)malloc(sizeof(struct node));
    // one=(struct node *)malloc(sizeof(struct node));
    // two=(struct node *)malloc(sizeof(struct node));
    // third=(struct node *)malloc(sizeof(struct node));
    node * head, * one,*two,*third;
head->data=7;
head->next=one;
one->data=11;
one->next=two;
two->data=22;
two->next=third;
third->data=33;
third->next=NULL;
traverse(head);

return 0;
}