#include<iostream>
using namespace std;

int bsearch(int a[], int s, int e, int x){

	if(s<=e){

		int m = (s+e)/2;

		if(a[m] == x)
			return m;

		if(a[m] < x)
			return bsearch(a,m+1,e,x);
		return bsearch(a,s,m-1,x);
	}
return -1;
}

int main(){

	int a[] = { 1,2,3,4,5};
	int n = sizeof(a)/sizeof(int);
	int x = 10;
	int res = bsearch(a,0,n-1,x);
	(res == 1) ? cout<<"Found": cout<<"Not Found";
return 0;
}
