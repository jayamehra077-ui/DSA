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
 void push_back(int val)
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
    tail->next=newnode;
    tail=newnode;
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
ll.push_back(2);
ll.push_back(3);
ll.push_back(4);

ll.printll();
return 0;
}