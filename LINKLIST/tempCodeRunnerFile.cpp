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
node*first;
node* temp;
node* ttemp;
node*p;
class list
{
    public:
    list()
    {
     first=NULL;
    }
    void add_node(int val)
    {
        node* newnode=new node(val);
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
            cout<<temp->data;
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
    void del_before(int x)
    {
        temp=first;
        while(temp->next->data!=x)
        {
ttemp=temp;
temp=temp->next;

        }
        p=temp->next;
        ttemp->next=p;
        temp->next=NULL;
        delete temp;
        
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
     cout<<"afte deleting node"<<endl;
    ll.del_before(40);
     ll.display();
     return 0;
}