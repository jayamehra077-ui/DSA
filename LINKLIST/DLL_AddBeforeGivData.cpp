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
 void add_before(int x,int y)
 {
    temp=first;
    ttemp=first->next;
    while(ttemp->data!=x)
    {
        temp=temp->next;
        ttemp=ttemp->next;
    }
    node*newnode=new node(x);
    newnode->data=y;
    temp->next=newnode;
    newnode->prev=temp;
    newnode->next=ttemp;
    ttemp->prev=newnode;
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
    ll.add_before(300,1000);
    ll.printll();
    return 0;
}