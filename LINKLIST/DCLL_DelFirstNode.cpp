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
        newnode->next=newnode;
        newnode->prev=newnode;
        
    }
    else{
        temp=first;
        //first->next=temp;
        while(temp->next!=first)
        {
            temp=temp->next;
        }
        //newnode->prev=NULL;
        temp->next=newnode;
        newnode->prev=temp;
        newnode->next=first;
        first->prev=newnode;
        

    
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
    //cout<<"NULL->";
   do
    {
        cout<<temp->data<<" ->";
        temp=temp->next;
    } while(temp!=first);
    //temp=temp->next;
    //cout<<"NULL"<<endl;
    cout<<endl;
 }
 void del_first_node()
 {
    temp=first;
    ttemp=first->next;
    while(temp->next!=first)
    {
        temp=temp->next;
    }
    //first->next=first->prev=NULL;
    temp->next=ttemp;
    ttemp->prev=temp;
    first=ttemp;
    first->next=first->prev=NULL;
    delete first;

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
    ll. del_first_node();
    ll.printll();
}