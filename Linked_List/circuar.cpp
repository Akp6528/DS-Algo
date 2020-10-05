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
void insert(node*&head, int data){
	node*n = new node(data);
	n->next = head;
	node*temp = head;
	if(temp!=NULL){
		while(temp->next!=head){
			temp = temp->next;
		}
		temp->next = n;
	}
	else
		n->next = n;
	head = n;
}

node* getnode(node*&head, int data){
	node*temp = head;
	while(temp->next!=head){
		if(temp->data == data){
			return temp;
		}
		temp = temp->next;
	}
	if(temp->data == data)
		return temp;
return NULL;
}

void deleteNode(node*&head,int data){
	
	node* del = getnode(head,data);
	if(del == NULL){
		return;
	}
	if(del == head){
		head = head->next;
	}
	node*temp = head;
	while(temp->next != del){
		temp = temp->next;
	}

	temp->next = del->next;
	delete(del);

return;
}

void print(node*head){
	node*temp = head;
	while(temp->next!=head){
		cout<<temp->data<<" ";  
		temp = temp->next;
	}
	cout<<temp->data;
}

int main(){

	node* head = NULL;
	insert(head,50);
	insert(head,40);
	insert(head,30);
	insert(head,20);
	insert(head,10);
	deleteNode(head,50);
	print(head);
	cout<<"\n";
	insert(head,5);
	print(head);
	cout<<"\n";
	deleteNode(head,5);
	print(head);
return 0;
}