#include<iostream>
using namespace std;

class node{
public:
	int data;
	node*next;
	node(int d){
		data = d;
		next = NULL;
	}
};

void print(node*head){
	while(head!=NULL){
		cout<<head->data<<" ";
		head = head->next;
	}
}
node* nodeFromEnd(node *head,int k){
    node *fast = head;
    node *slow = head;
    for(long i=1;i < k && fast->next!=NULL ;i++){
        fast = fast->next;
    }
    while(fast->next!=NULL && fast!=NULL){
        fast = fast->next;
        slow = slow->next;
    }
    return slow;
}

int main(){

node* head = NULL;



return 0;
}


