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
class solution
{public:
    node* midnode(node* head)
{
    //node*fast;
    node* slow=head;
    node* fast=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
};
class list:public solution
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
 void printMidNode() { 
        node* middle = midnode(head); // Get the middle node
        if (middle != NULL) {
            cout << middle->data << endl; // Print its data
        } else {
            cout << "List is empty, no middle node." << endl;
        }
    } 
};
int main(){
list ll;
ll.push_front(2);
ll.push_front(3);
ll.push_front(4);
ll.push_front(5);
cout<<"linklist:\n";
ll.printll();
cout << "midnode:\n"; 
    ll.printMidNode();

return 0;
}