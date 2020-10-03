#include <iostream>
using namespace std;

int* fun() {

	//int a[] = {1,2,3,4,5};
	int *a = new int[5];
	for(int i=0; i<5; i++)
		cin>>a[i];

	cout<< a << endl;
	cout<< a[0] <<endl;

return a;
}


int main(){

int* b = fun();

cout<< b <<endl;

cout<< b[0] << endl;

return 0;
}