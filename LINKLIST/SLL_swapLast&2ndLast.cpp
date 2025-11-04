#include<iostream>
using namespace std;
class node
{
    public:
 int data;
 node* next;
  node(int val)
 {
   data=val;
   node*next=NULL;
 }
};
class list
{
    public:
node*first;
node* temp;
node* ttemp;
node*p;
list()
{
   first=temp=ttemp=p=NULL; 
}

void add_node(int x)
{
    node* newnode=new node(x);
    temp=first;
    if(first==NULL)
    {
      first=newnode;
    }
    else{
    temp=first;
    while(temp->next!=NULL)
    {
        temp=temp->next;
        
    }
    temp->next=newnode;
}
}
void print()
{
    temp=first;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;

}
void swap()
{
   p=first;
   temp=p->next;
   ttemp=temp->next;
   
    while(p->next->next->next!=NULL)
    {
       
       p=p->next;
    }
   p->next=ttemp;
   ttemp->next=temp;
   temp->next=NULL;
   
}
};
int main()
{
     list ll;
     ll.add_node(10);
     ll.add_node(20);
     ll.add_node(30);
     ll.add_node(40);
     ll.add_node(50);
     ll.print();
     ll.swap();
     return 0;
}