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
   first=NULL; 
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
    temp=first;
    ttemp=temp->next;
    p=first->next;
    while(ttemp->next!=NULL)
    {
        temp=temp->next;
        ttemp=ttemp->next;
    }
    temp->next=first;
    first->next=NULL;
    ttemp->next=p;
    first=ttemp;
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
     ll.print();
     return 0;
}