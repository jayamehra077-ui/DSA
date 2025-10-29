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
class list
{
 node* head;
 node* tail;
 public:
 list()
 {
    head=tail=NULL;

 }
 void push_front(int val)
 {
node* newnode=new node(val);//data stors permanently
//node newnode(val); "data erase after func calling"
//newnode->next=head;
//head=newnode;
 
if(head==NULL)
{
    head=tail=newnode;
    return;
}
else{
    newnode->next=head;
    head=newnode;
}
}
void insert(int val, int pos)
{
 if(pos<0)
 {
    cout<<"invalid position";
    return ;
 }
 else{
    if(pos==0)
    {
        push_front(val);
        return;
    }
    else{
        node* temp=head;
        for(int i=0;i<pos-1;i++)
        {
            if(temp==NULL)
            {
                cout<<"invailid";
                return;
            }
            else{
            temp=temp->next;
            }
        }
        node* newnode=new node(val);
        newnode->next=temp->next;
        temp->next=newnode;
    }
 }
}
 void printll()
 {
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ->";
        temp=temp->next;
    }
    //temp=temp->next;
    cout<<"NULL"<<endl;
 }
};
int main(){
list ll;
ll.push_front(2);
ll.push_front(3);
ll.push_front(4);
ll.push_front(5);
ll.insert(4,1);
ll.printll();
return 0;
}