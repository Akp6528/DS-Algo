#include<iostream>
using namespace std;
#include<climits>

int main(){

int n;
cin>>n;

int arr[100000];
int max = INT_MIN;

for(int i=0; i<n; i++){
	cin>>arr[i];
	if(arr[i] > max){
		max = arr[i];
	}
}

cout<<max<<endl;


return 0;
}