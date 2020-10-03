#include<iostream>
using namespace std;

void count_sort(int arr[], int n){

	int len = -1;
	for(int i=0; i<n; i++){
	     len = max(len,arr[i]);
	}

	int *freq = new int[len+1]{0};

	for(int i=0; i<n; i++){
		freq[arr[i]]++;
	}
	int j = 0;
	for(int i=0; i<=len; i++){
		
        while(freq[i]>0){
			arr[j] = i;
			freq[i]--;
			j++;
		}
	}
}


int main(){

	int n;
    int arr[10000] = {0}; 
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	count_sort(arr,n);

	for(int i=0; i<n; i++){
		cout<<arr[i]<< " ";
	}

return 0;
}