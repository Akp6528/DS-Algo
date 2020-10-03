#include<iostream>
using namespace std;

int fact(int a){

	if(a == 0 || a== 1)
		return a;
	else 
	return fact(a-1) + fact(a-2);
}

int main(){

int n;
cin>>n;
for (int i = 0; i < n; ++i){
cout<<fact(i)<<" " ;
}
return 0;	
}