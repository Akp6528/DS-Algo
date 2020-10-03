#include <iostream>
using namespace std;

bool isSorted(int a[],int n){
	if(n==1 || n==0)
		return true;

	if(a[0]<a[1] && isSorted(a+1,n-1))
		return true;
return false;
}

int main(){
	
	int arr[] = {1,2,3,4,5};
	int n = sizeof(arr)/ sizeof(int);
	
	cout<< isSorted(arr,n) << endl;
	return 0;
}