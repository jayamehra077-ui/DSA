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
    next;
   }
};
circular*first;
circular*temp;
circular*ttemp;
class list
{
    public:
    list()
    {
        first=temp=ttemp=NULL;
    }
    void add_node(int x)
    {
        circular* newnode;
        if(first==NULL)
        {
         first=newnode;
         first->next=newnode;
        }
        else
        {
            temp=first;
          while(temp->next!=first)
          {
            temp=temp->next;
          }
          ttemp=newnode;
          ttemp->next=first;
          temp->next=ttemp;
        }
    }
        void display()
        {
            temp=first;
            do
            {
             cout<<temp->data<<"->";  
             temp=temp->next;
            } while (temp!=first);
            
        }
    
    }
};