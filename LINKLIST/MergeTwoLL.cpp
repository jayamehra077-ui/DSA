#include<iostream>
using namespace std;
class node1
{
    public:
 int data1;
 node1* next1;
  node1(int val)
 {
   data1=val;
   node1*next1=NULL;
 }
};
class list1
{
    public:
node1*first1;
node1* temp1;
node1* ttemp1;
list1()
{
   first1=NULL; 
}

void add_node(int x)
{
    node1* newnode=new node1(x);
    temp1=first1;
    if(first1==NULL)
    {
      first1=newnode;
    }
    else{
    temp1=first1;
    while(temp1->next1!=NULL)
    {
        temp1=temp1->next1;
        
    }
    temp1->next1=newnode;
}
}
void print()
{
    temp1=first1;
    while(temp1!=NULL)
    {
        cout<<temp1->data1<<"->";
        temp1=temp1->next1;
    }
    cout<<"NULL"<<endl;

}
};
class node2
{
    public:
 int data2;
 node2* next2;
  node2(int val)
 {
   data2=val;
   node2*next2=NULL;
 }
};
class list2
{
    public:
node2*first2;
node2* temp2;
node2* ttemp2;
list2()
{
   first2=NULL; 
}

void add_node(int x)
{
    node2* newnode=new node2(x);
    temp2=first2;
    if(first2==NULL)
    {
      first2=newnode;
    }
    else{
    temp2=first2;
    while(temp2->next2!=NULL)
    {
        temp2=temp2->next2;
        
    }
    temp2->next2=newnode;
}
}
void print()
{
    temp2=first2;
    while(temp2!=NULL)
    {
        cout<<temp2->data2<<"->";
        temp2=temp2->next2;
    }
    cout<<"NULL"<<endl;

}

};
class merge:public list1,public list2
{

    public:
    int data;
    merge*next,*temp;
    merge(int val)
    {
      data=val;
      next=NULL;  
    }
    void add_ll(merge* first1,merge* first2)
    {
      merge* dummy = new merge(0);
    merge* current = dummy;

    while (first1 != nullptr && first2 != nullptr) {
        if (first1->data <= first2->data) {
            current->next = first1;
            first1 = first1->next;
        } else {
            current->next = first2;
            first2 = first2->next;
        }
        current = current->next;
    }
    if (first1 != nullptr) {
        current->next = first1;
    } else {
        current->next = first2;
    }

    }
    void printlist()
    {
        while (temp != nullptr) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;

    }
};
int main()
{
     list1 ll1;
      list2 ll2;
      
      
      cout<<"list 1:"<<endl;
     ll1.add_node(1);
     ll1.add_node(3);
     ll1.add_node(5);
     ll1.add_node(7);
     ll1.add_node(9);
     ll1.print();
     //list2 ll2;
       cout<<"list 2:"<<endl;
     ll2.add_node(2);
     ll2.add_node(4);
     ll2.add_node(6);
     ll2.add_node(8);
     ll2.add_node(10);
     ll2.print();
       cout<<"merge list:"<<endl;

     return 0;

}