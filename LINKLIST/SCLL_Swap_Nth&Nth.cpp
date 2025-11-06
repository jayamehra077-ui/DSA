#include<iostream>
using namespace std;
class circular
{
    public:
   int data;
   circular* next;
   circular(int val)
   {
    data=val;
    next=NULL;
   }
};
circular*first;
circular*temp;
circular*ttemp,*p,*q,*a,*b;
class list
{
    public:
    list()
    {
        
    }
    void add_node(int x)
    {
        circular* newnode=new circular(x);
        if(first==NULL)
        {
         first=newnode;
         newnode->next=first;
        }
        else
        {
            temp=first;
          while(temp->next!=first)
          {
            temp=temp->next;
          }
          temp->next=newnode;
          newnode->next=first;
        }
    }
        void display()
        {
            if (first == NULL) {
            cout << "List is empty." << endl;
            return;
        }
            temp=first;
            do
            {
             cout<<temp->data<<"->";  
             temp=temp->next;
            } while (temp!=first);
            
cout<<endl;
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
     ll.display();
     ll.swap(20,50);
     ll.display();
     return 0;
}
