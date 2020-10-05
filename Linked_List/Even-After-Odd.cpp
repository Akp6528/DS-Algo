#include <bits/stdc++.h>
using namespace std;

class node
{
  public:  
    int data;
    node* next;
     
    node(int d)
    {
        data=d;
        next=NULL;
    }
};

void insertTail(node*& head, int data)
{
    if(head==NULL)
    {
        head=new node(data);
        return;
    }

    node* new_node=new node(data);
    node* tail=head;
    while(tail->next!=NULL)
    {
        tail=tail->next;
    }

    tail->next=new_node;
    return;
}

void noOfNodes(node*& head, int n)
{
    int data;
    while(n--)
    {
        cin>>data;
        insertTail(head, data);
    }
}

node* oddEven(node* head)
{
    node* temp1=NULL;
    node* temp2=NULL;
    while(head!=NULL)
    {
        if(head->data%2!=0){
            insertTail(temp1,head->data);            
        }
        else{
            insertTail(temp2,head->data);
        }
        head=head->next;

    }
    if(temp1==NULL)
        return temp2; 
    else{
        node* t=temp1;
        while(t->next!=NULL){
            t=t->next;
        }
        t->next=temp2;
    }
    return temp1;
}

void print(node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}

int main() 
{
    int n;
    cin>>n;
    node* head=NULL;
    noOfNodes(head,n);
    node* t = oddEven(head);
    print(t);
return 0;
}