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
node *temp,*ttemp,*p,*first,*q,*a,*b;
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
    ttemp=p->next;
    b=temp->next;
    while(ttemp->data!=y)
    {
        a=a->next;
        ttemp=ttemp->next;
        b=b->next;
    }
    p->next=ttemp;
    ttemp->prev=p;
    ttemp->next=q;
    q->prev=ttemp;
    a->next=temp;
    temp->prev=a;
    temp->next=b;
    b->prev=temp;
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
    ll.swap(200,400);
    ll.printll();

}