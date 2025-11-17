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
circular*ttemp,*p;
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
            
            
        }
    void del_after(int x)
{
    temp=first;
    while(temp->data!=x)
    {
        temp=temp->next;
    }
        ttemp=temp->next;
        p=ttemp->next;
        temp->next=p;
        ttemp->next=NULL;
        delete ttemp;
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
     ll.del_after(30);
     ll.display();
     return 0;
}
