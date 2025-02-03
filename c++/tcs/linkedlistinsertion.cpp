#include<iostream>
using namespace std;

struct node{
    int data;
    struct node* next;

};

void linleklist(struct node* ptr)
{
    while(ptr!=NULL)
    {
        cout<<ptr->data;
        ptr=ptr->next;
    }
}
struct bode* first(struct node*head, int data)
{
    struct node*ptr =(struct node*)malloc(sizeof(struct node));
    ptr->next=head;
    ptr->data=data;
    return ptr;
}


int main()
{
  struct node* head = (struct node*)malloc(sizeof(struct node));
  struct node* second=(struct node*)malloc(sizeof(struct node));
  struct node* third=(struct node*)malloc(sizeof(struct node));

  head->data=1;
  head->next=second;


  second->data=3;
  second->next=third;

  third->data=9;
  third->next=NULL;

   linkedlist(head);
   head=first(head,8);
   cout<<endl;
   linleklist(head);
   return 0;

  
}