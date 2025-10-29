#include<iostream>
using namespace std;
struct node
{
 int data;
 node* next,*prev;

node *temp,*ttemp,*p,*first;
void creat_first()
{
    first=new node;
    cin>>first->data;
    first->next=first->prev=NULL;
}
void add_node()
{
temp=first;
while(temp->next!=NULL)
{
    temp=temp->next;
    ttemp=new node;
    cin>>ttemp->data;
    temp->next=ttemp;
    ttemp->prev=temp;
    ttemp->next=NULL;
}
}
void printll()
 {
    node* temp=first;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ->";
        temp=temp->next;
    }
    //temp=temp->next;
    cout<<"NULL"<<endl;
 }};
 int main()
 {
   struct node n1;
   n1.add_node();
   n1.add_node();
   n1.add_node();
   n1.printll();

 }