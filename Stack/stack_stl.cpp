#include<iostream>
using namespace std;
#include<stack>

int main(){

	stack <int> s;
	for(int i=0; i<5; i++){
		s.push(i);
	}

	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}
return 0;
}