#include<iostream>
using namespace std;
#include<stack>

void stockSpan(int prices[], int n, int span[]){
	stack<int> s;
	s.push(0);

	span[0] = 1;

	for(int i=0; i<=n-1;i++){

		int currPrice = prices[i];

		while(!s.empty() && prices[s.top()] <= currPrice){
			s.pop();
		}

		if(!s.empty()){
			int prev_highest = s.top();
			span[i] = i - prev_highest;
		}
		else{
			span[i] = i+1;
		}	
		s.push(i);
	}
}

int main(){

	int prices[] = {30,35,40,38,35};
	int n = sizeof(prices)/sizeof(int);
	int span[100000] = {0};

	stockSpan(prices,n,span);
	for(int i=0; i<n; i++){
		cout<<span[i]<<" ";
	}

return 0;
}