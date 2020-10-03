#include<iostream>
using namespace std;

void dnf_sort(int a[], int n){

	int l = 0;
	int h = n-1;
	int mid = 0;

	if(a[mid]==0){
		swap(a[mid],a[l]);
		l++;
		mid++;
	}

	if(a[mid]==1){
		mid++;
	}

	if(a[mid]==2){
		swap(a[mid],a[h]);
		h--;
	}
}

int main(){
int n;
cin>>n;
int a[100] = {0};

for(int i=0; i<n; i++){
	cin>>a[i];
}

dnf_sort(a,n);

for(int i=0; i<n; i++)
	cout<<a[i]<<" ";

return 0;
}