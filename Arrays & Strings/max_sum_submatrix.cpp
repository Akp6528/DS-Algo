#include<iostream>
using namespace std;
#include<climits>
int max_sum(int arr[][100], int n, int m) {

	for (int i = n-1; i >=0 ; --i){
		for(int j=m-1; j>=0; j--){
			arr[i][j] += arr[i][j+1]; 
		}
	}

	for(int i=m-1; i>=0; i--){
		for(int j=n-2; j>=0; j--){
			arr[j][i] += arr[j+1][i]; 
		}
	}

	int result = INT_MIN;
	for (int i = 0; i < n; ++i){
		for(int j=0; j<n; j++){
			result = max(result, arr[i][j]);
		}
	}
	return result;
}

int main(){

	int m,n;
	cin>>m>>n;
	int a[100][100];
	for (int i = 0; i < n; ++i){
		for(int j=0; j<n; j++){
			cin>>a[i][j];	
		}
	}
	cout<<max_sum(a,m,n)<<endl;

return 0;
}