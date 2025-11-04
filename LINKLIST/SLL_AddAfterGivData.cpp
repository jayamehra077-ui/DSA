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
node* first;
node* temp;
node*ttemp;
node* p;
class list
{
    public:
    list()
    {
        first=NULL;
    }
    void add_node(int x)
    {
        node* newnode=new node(x);
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
    void add_after(int x,int y)
    {
       // node*p=new node(x)
        temp=first;
        while(temp->data!=x)
        {
            temp=temp->next;
        }
        ttemp=temp->next;
        node*p=new node(y);
        p->data=y;
        temp->next=p;
        p->next=ttemp;

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
     cout<<"after addition\n";
     ll.add_after(40,100);
     ll.display();
     return 0;
}