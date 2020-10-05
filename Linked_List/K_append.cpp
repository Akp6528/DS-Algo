#include<iostream>
using namespace std;


class node{
public:
	long data;
	node*next;
	node(long d){
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
node* k_append(node *head,long k){

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

void insertAtTail(node*&head,int d){
	if(head == NULL){
		head = new node(d);
		return;
	}
	node*temp = head;
	while(temp->next!=NULL){
		temp = temp->next;
	}
	temp->next = new node(d);
	
return;
}

node* input(){
	int d;
	node*head = NULL;
	cin>>d;
	while(d != -1){
		insertAtTail(head,d);
		cin>>d;
	}
	return head;
}


int main(){
long key;
node* head = input();
cin>>key;

node* t = k_append(head,key);
cout<<t->data;
return 0;
}