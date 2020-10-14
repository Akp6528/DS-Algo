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

void insertAthead(node*&head, int d){
	if(head==NULL){
		head = new node(d);
		return;	
	}
	node* temp = new node(d);
	temp->next = head;
	head = temp;
}

void insertAtTail(node*&head, int d){
	if(head == NULL){
		head = new node(d);
		return;
	}
	node*temp = head;
	while(temp->next!=NULL){
		temp = temp->next;
	}
//	node*t = new node(d);
	temp->next = new node(d);
	return;
}

int length(node*head){
	int cnt=0;
	while(head!=NULL){
		cnt++;
		head = head->next;
	}
	return cnt;
}

void insertInmiddle(node*&head, int d, int p){

	if(head==NULL || p==0){
		insertAthead(head,d);
	}
	else if(p>length(head)){
		insertAtTail(head,d);
	}
	else {
	int j=0;
	node*temp = head;
	while(j<p-2){
		temp = temp->next;
		j++;
	}
	node* n = new node(d);
	n->next = temp->next;
	temp->next = n;
}
}

void deleteHead(node*&head){
	if(head == NULL){
		return;
	}
	node*temp = head;
	head = head->next;
	delete(temp);
}

void deleteTail(node*&head){
	if(head==NULL){
		return;
	}
	node*prv = NULL;
	node*temp = head;
	while(temp->next != NULL){
		prv = temp;
		temp = temp->next;
	}
	prv->next = NULL;
	delete(temp);
}

void deleteMiddle(node*&head, int p){
	if(head==NULL || p==0){
		deleteHead(head);
	}
	else if(p>length(head)){
		deleteTail(head);
	}
	else{
		int j=0;
		node*temp = head;
		while(j<p-2){
			temp=temp->next;
			j++;
		}
		node* temp1 = temp->next;
		temp->next = temp1->next;
		delete(temp1);
	}
}

void print(node*head){
	while(head!=NULL){
		cout<<head->data<<" -> ";
		head = head->next;
	}
}

bool search(node*head, int key){

	node*temp = head;
	while(temp!=NULL){
		if(head->data == key){
			return true;
		}
		head = head->next;
	}
	return false;
}
//Recursion

bool searchRec(node*head, int key){
	if(head == NULL)
		return false;

	if(key == head->data){
		return true;
	}
	else
		return searchRec(head->next,key);

}

node* takeInput(){

	node*head = NULL;
	int d,data;
	cout<<"No. of Nodes ";
	cin>>d;
	while(d--){
		cin>>data;
		insertAthead(head,data);
	}
return head;
}

void reverse(node*&head){
	node*curr = head;
	node*prev = NULL;
	node*t;
	while(curr!=NULL){
		t = curr->next;
		curr->next = prev;
		prev = curr;
		curr = t;
	}
	head = prev;
}

node* recReverse(node*&head){
	if(head->next==NULL || head==NULL){
		return head;
	}

	node* shead = recReverse(head->next);
	//node* temp = shead;
	// while(temp->next!=NULL){
	// 	temp= temp->next;
	// }
	// head->next = NULL;
	// temp->next = head;
	head->next->next = head;
	head->next = NULL;
	return shead;
}

node* midpoint(node*head){
	if(head==NULL || head->next==NULL){
		return head;
	}
	node*slow = head;
	node*fast = head->next;

	while(fast!=NULL && fast->next!=NULL){
		fast = fast->next->next;
		slow = slow->next;
	}
	return slow;
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

node*merge(node*a, node*b){
	if(a==NULL){
		return b;
	}
	if(b==NULL){
		return a;
	}
	node*c;
	if(a->data < b->data){
		c = a;
		c->next = merge(a->next, b);
	}
	else{
		c = b;
		c->next = merge(a, b->next);
	}
return c;
}

node* mergeSort(node*head){

	if(head==NULL || head->next==NULL){
		return head;
	}

	node* mid = midpoint(head);

	node*a = head;
	node*b = mid->next;
	mid->next = NULL;

	a = mergeSort(a);
	b = mergeSort(b);

	node* c = merge(a,b);
	return c;
}

bool detectcycle(node*head){
	node*slow = head;
	node*fast = head;

	while(fast!=NULL && fast->next!=NULL){
		fast = fast->next->next;
		slow = slow->next;

		if(slow == fast){
			return true;
		}
	}
	return false;
}

int main(){
	node* head = takeInput();
	print(head);
	//cout<<"\n";
	//node* head2 = takeInput();
	//print(head2);
	cout<<"\n";
	//node* m = mergeSort(head);
	//print(m);
	//if(detectcycle(head)){
	//	cout<<"Cycle Found";
	//}
	//else 
	//	cout<<"Not Cycle";

	//node* t = recReverse(head);
	//print(t);
	//cout<<"\n";
	//node* mid = midpoint(head);
	//cout<<mid->data<<"\n";
	node* t = nodeFromEnd(head,2);
	cout<<t->data<<"\n";
	
	// insertAthead(head,5);
	// insertAthead(head,4);
	// insertAthead(head,3);
	// insertAthead(head,2);
	// print(head); cout<<"\n";	
	// insertInmiddle(head,10,3);
	// insertAtTail(head,100);
	// print(head); cout<<"\n";
	// deleteHead(head);
	// deleteTail(head);
	// deleteMiddle(head,2);
	// print(head); cout<<"\n";
	// int k;
	// cin>>k;
	// if(searchRec(head,k))
	// 	cout<<"Element Found!!";
	// else
	// 	cout<<"Not Found!!";
	//  if(search(head,k))
	// 	cout<<"Element Found!!";
	// else
	// 	cout<<"Not Found!!";
return 0;
}
