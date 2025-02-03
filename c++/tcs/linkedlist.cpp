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
   return 0;

  
}