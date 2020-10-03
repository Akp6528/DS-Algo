#include<iostream> 
using namespace std; 

int power(int, int [], int);

void fact(int n) 
{ 
	int a[1000]; 
	a[0] = 1; 
	int size = 1; 
	for (int x=2; x<=n; x++) 
		size = power(x, a, size); 
	for (int i=size-1; i>=0; i--) 
		cout << a[i]; 
} 


int main() 
{ 
     int a;
    cin>>a;
	fact(a); 
	return 0; 
} 

int power(int x, int a[], int size) 
{ 
	int carry = 0; 
	for (int i=0; i<size; i++) 
	{ 
		int prod = a[i] * x + carry; 
        a[i] = prod % 10; 
        carry = prod/10;	 
	} 
    while (carry) 
	{ 
		a[size] = carry%10; 
		carry = carry/10; 
		size++; 
	} 
	return size; 
} 