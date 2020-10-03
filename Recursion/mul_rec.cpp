#include<iostream>
using namespace std;

int power(int b, int p){

	if(p != 0)
		return b+power(b, p-1);
	else 
		return 0;
}

int main(){
	int b,p;
	cin>>b>>p;
	cout<<power(b,p);
return 0;
}