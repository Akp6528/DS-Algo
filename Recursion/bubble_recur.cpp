#include<iostream>
using namespace std;

void bubble(int a[], int n){

	if(n==1)
		return ;

	for(int j=0; j<n-1; j++){
		if(a[j]>a[j+1]){
			swap(a[j],a[j+1]);
		}
	}
	bubble(a,n-1);
}

int main(){

	int a[] = { 10,2,3,4,5};
	int n = sizeof(a)/sizeof(int);

	bubble(a,n);
	for(int i=0; i<n; i++)
		cout<<a[i]<<" ";

return 0;
}
