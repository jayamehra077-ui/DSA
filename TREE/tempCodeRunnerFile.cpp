#include<iostream>
using namespace std;
struct BST
{
    int data;
    BST *left,*right,*p;

};
BST *root,*temp,*ttemp;
void init()
{
    root=temp=ttemp=NULL;
}
void create_root(int x)
{
    root=new BST;
    root->data=x;
    root->left=root->right=NULL;
}
void add_node(int x)
{
    temp=root;
    while(temp!=NULL)
    {
        ttemp=temp;
        if(temp->data>x)
        {
            temp=temp->left;
        }
        else{
            temp=temp->right;
        }
    }
    BST*p=new BST;
    p->data=x;
    p->left=p->right=NULL;
    if(ttemp->data>x)
    {
        ttemp->left=p;
    }
    else{
         ttemp->right=p;
    }
}
void in_order(BST*p)
{
  if(p!=NULL)
  {
    in_order(p->left);
    cout<<p->data;
    in_order(p->right);
  }
}
void pre_order(BST*p)
{
  if(p!=NULL)
  {
    //in_order(p->left);
    cout<<p->data;
    in_order(p->left);
    in_order(p->right);
  }
}
void post_order(BST*p)
{
  if(p!=NULL)
  {
    //in_order(p->left);
   // cout<<p->data;
    in_order(p->left);
    in_order(p->right);
    cout<<p->data;
  }
}
int count=0;
void count_node(BST*P)
{
    if(P!=NULL)
    {
        count++;
        count_node(P->left);
        count_node(P->right);
    }
}
int main()
{
  init();
  create_root(100);
  add_node(50);
add_node(200);
add_node(150);
add_node(170);
add_node(300);
add_node(20);
cout<<"----IN_ORDERED SEQUENCE-----"<<endl;
in_order(root);
cout<<"\n";
cout<<"----PRE_ORDERED SEQUENCE-----"<<endl;
pre_order(root);
cout<<"\n";
post_order(root);
cout<<"----POST_ORDERED SEQUENCE-----"<<endl;
cout<<"\n";
//cout<<"total number of nodes in tree="<<count;
//post_order(root);
count_node(root);

}