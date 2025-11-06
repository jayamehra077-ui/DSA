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
node*p,*q,*a,*b;
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
void swap(int x,int y)
{
  p=first;
  temp=p->next;
  q=temp->next;
  while(temp->data!=x)  
  {
    p=p->next;
    temp=temp->next;
    q=q->next;
  }
  a=first;
  ttemp=a->next;
  b=ttemp->next;
   while(ttemp->data!=y)
   {
    a=a->next;
    ttemp=ttemp->next;
    b=b->next;
   }  
   p->next=ttemp;
   ttemp->next=q;
   a->next=temp;
   temp->next=b;
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
     ll.swap(20,40);
     ll.print();
     return 0;
}