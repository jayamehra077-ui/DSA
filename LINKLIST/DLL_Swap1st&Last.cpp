#include<iostream>
using namespace std;
class node
{
    public:
 int data;
 node* next,*prev;
 node(int x)
 {
   data=x;
   prev=next=NULL;
 }
};
class list
{
    public:
node *temp,*ttemp,*p,*first;
list()
{
    temp=ttemp=first=p=NULL;
}
void creat_first(int val)
{
    node*newnode=new node(val);
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
        //newnode->prev=NULL;
        temp->next=newnode;
        newnode->prev=temp;
        //first=newnode;

    
}
/*void add_node()
{
temp=first;
while(temp->next!=NULL)
{
    temp=temp->next;
    ttemp=new node;
    cin>>ttemp->data;
    temp->next=ttemp;
    ttemp->prev=temp;
    ttemp->next=NULL;
}
}*/}
void printll()
 {
    node* temp=first;
    cout<<"NULL->";
   do
    {
        cout<<temp->data<<" ->";
        temp=temp->next;
    } while(temp!=NULL);
    //temp=temp->next;
    cout<<"NULL"<<endl;
 }
 void swap()
 {
    p=first->next;
    temp=first;
    ttemp=temp->next;
    while(ttemp->next!=NULL)
    {
        temp=temp->next;
        ttemp=ttemp->next;
    }
    temp->next=first;
    first->prev=temp;
    first->next=NULL;
    ttemp->prev=NULL;
    ttemp->next=p;
    p->prev=ttemp;
    first=ttemp;
 }
};
int main()
{
    list ll;
    ll.creat_first(100);
    ll.creat_first(200);
    ll.creat_first(300);
    ll.creat_first(400);
    ll.creat_first(500);
    ll.printll();
    ll.swap();
    ll.printll();
}