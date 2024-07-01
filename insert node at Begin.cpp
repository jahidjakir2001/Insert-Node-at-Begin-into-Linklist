#include<bits/stdc++.h>
using namespace std;
struct node
{
      int data;
      struct node *next;
};
void TraverseNode(struct node *head)
{
      while(head!=NULL)
      {
            cout<<"Element : "<<head->data<<endl;
            head=head->next;
      }
}
struct node *InsertNodeAtBegining(struct node *ptr,int data)
{
      struct node *head=NULL;
      head=(struct node *)malloc(sizeof(struct node));
      head->data=data;
      head->next=ptr;
      return head;
};
int main()
{
      struct node *head=NULL,*first=NULL,*second=NULL,*third=NULL;
      //Dynamic Memory allocation
      head=(struct node *)malloc(sizeof(struct node));
      second=(struct node *)malloc(sizeof(struct node));
      first=(struct node *)malloc(sizeof(struct node));
      third=(struct node *)malloc(sizeof(struct node));
      // Assing data and create link
      head->data=10;
      head->next=first;
      first->data=20;
      first->next=second;
      second->data=30;
      second->next=third;
      third->data=40;
      third->next=NULL;
      //Traverse Node
      cout<<"Taverse before insertion:"<<endl;
      TraverseNode(head);
      head=InsertNodeAtBegining(head,50);
      cout<<"Taverse node left to right insert new node at beginning:"<<endl;
      TraverseNode(head);
}
