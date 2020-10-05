#include<iostream>
using namespace std;
#include<stack>

void insertAtBottom(stack<int>&s, int x){
	if(s.empty()){
		s.push(x);
		return ;
	}
	int d = s.top();
	s.pop();
	insertAtBottom(s,x);
	s.push(d);
}

void reverse(stack<int> &s){

	if(s.empty()){
		return;
	}

	int x = s.top();
	s.pop();
	reverse(s);
	insertAtBottom(s,x);
}


void print(stack<int>s){
	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}
}


int main(){

stack <int> s;

s.push(1);
s.push(2);
s.push(3);
s.push(4);
print(s);
cout<<endl;
reverse(s);
print(s);

return 0;
}