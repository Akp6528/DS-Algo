#include<iostream>
using namespace std;
#include<cstring>

int string_to_int(char a[], int n){
	if(n==0)
		return 0 ;
	int l = a[n-1] - '0';
	int ans = string_to_int(a,n-1);

	return ans*10 + l;
}


int main(){

	//char a[] = "1234";
	char a[10000] ;
	cin>>a;

	int n = strlen(a);
	int res = string_to_int(a,n);
	cout<<res;

return 0;
}