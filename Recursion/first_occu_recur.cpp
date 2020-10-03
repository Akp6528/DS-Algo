#include<iostream>
using namespace std;

int store_Occu(int a[], int i, int n, int k, int out[], int j){

	if(i==n)
		return j;
	if(a[i] == k){
		out[j] = i;
		return store_Occu(a,i+1,n,k,out,j+1); 
	}
	return store_Occu(a,i+1,n,k,out,j);
}


void allOccu(int a[],int i,int n, int k){
	if(i==n)
		return;
	if(a[i] == k){
		cout<< i << ", ";
	}
	allOccu(a,i+1,n,k);
}


int last_occu(int a[], int n, int x){
	if(n==0)
		return -1;

	int i = last_occu(a+1,n-1,x);
	if(i==-1){
		if(a[0] == x)
			return 0;
		else 
			return -1;
	}
	return i+1;
}

int first_occu(int a[], int n,int x){

	if(n==0){
		return -1;
	}
	if(a[0] == x){
		return 0;
	}
	else {
		int i = first_occu(a+1,n-1,x);
		if(i==-1){
			return -1;
		}
		else 
			return i+1;
	}
}
//Another Way

int lsearch(int a[], int i, int n, int x){
	if(n==0)
		return -1;

	if(a[i] == x)
		return i;

	return lsearch(a,i+1,n,x);
}


int main(){

	int a[] = { 1,2,3,7,4,7,5};
	int n = sizeof(a)/sizeof(int);
	int x = 7;
	cout<<first_occu(a,n-1,x)<<endl;
	cout<<lsearch(a,0,n,x)<<endl;
	cout<<last_occu(a,n-1,x)<<endl;
	allOccu(a,0,n,x);
	int out[100];
	int cnt = store_Occu(a,0,n-1,x,out,0);
	cout<<"\n"<<cnt<<endl;
	for(int k=0; k<cnt; k++)
		cout<<out[k]<<" ";

return 0;
}
