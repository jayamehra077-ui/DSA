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
       next=NULL;
    }
};
node*first,*temp,*ttemp,*p;
class list
{
    public:
    list()
    {
        first=temp=ttemp=p=NULL;
    }
    
    void add_node(int x)
    {
        node*newnode=new node(x);
      if(first==NULL)
      {
        first=newnode;
      }
      else{
        temp=first;
        while(temp->next!=NULL)
        {
           // cin>>temp->data;
            temp=temp->next;
        }
        temp->next=newnode;
       // first=newnode;
      }
    }
    void display()
    {
        temp=first;
        while(temp!=NULL)
        {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
    void add_before(int x,int y)
    {
        temp=first;
        ttemp=temp->next;
        while(ttemp->data!=x)
        {
            temp=temp->next;
            ttemp=ttemp->next;
        }
        node*newnode=new node(y);
        temp->next=newnode;
        newnode->next=ttemp;

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
     ll.add_before(30,100);
     ll.display();

}