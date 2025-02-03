#include<iostream>
using namespace std;

struct node{
    int data;
    struct node* next;

};

void linkedlist(struct node* ptr)
{
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}
struct node* first(struct node*head, int data)
{
    struct node*ptr =(struct node*)malloc(sizeof(struct node));
    ptr->next=head;
    ptr->data=data;
    return ptr;
}
struct node* end(struct node*head, int data)
{
    struct node*ptr =(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
        struct node*p =head;
        while(p->next!=NULL)
        {
            p=p->next;
        }
   p->next=ptr;
   ptr->next=NULL;
    return head;
}

struct node* atindex(struct node*head, int data,int index){
      struct node*ptr =(struct node*)malloc(sizeof(struct node));
    struct node*p =head;
    
    int i=0;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    
    return head;
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
   linkedlist(head);
   head=atindex(head,45,2);
    cout<<endl;
   linkedlist(head);
     head=end(head,0);
         cout<<endl;
   linkedlist(head);
   return 0;

  
}