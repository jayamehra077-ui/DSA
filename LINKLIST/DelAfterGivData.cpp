#include<iostream>
using namespace std;
class node
{public:

    int data;
    node* next;
    node(int val)
    {
        data=val;
        next=NULL;
    }
};
class list
{ public:
    node*first;
    node*temp;
    node* ttemp;
    node*p;
    list()
    {
        first=NULL;
    }
    void add_node(int x)
{   node*newnode=new node(x);
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
    ll.add_node(60);
    ll.print();
    cout<<"afte deleting node"<<endl;
    ll.del_after(40);
     ll.print();
}
