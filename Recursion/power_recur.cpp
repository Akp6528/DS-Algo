#include<iostream>
using namespace std;

int power(int b, int p){

	if(p != 0)
		return b*power(b, p-1);
	else 
		return 1;
}

int fast_power(int b, int n){
	if(n==0){
		return 1;
	}
	int ans = fast_power(b,n>>1);
	ans *= ans ;
	if(n&1)
		return b*ans;
	return ans;
}

int main(){
	int b,p;
	cin>>b>>p;
	cout<<power(b,p)<<endl;
	cout<<fast_power(b,p);

return 0;
}