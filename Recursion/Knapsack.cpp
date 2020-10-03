#include<iostream>
using namespace std;

int profit(int n, int c, int wt[], int price[]){
	if(n==0 || c==0)
		return 0;

	int ans =0;
	int inc,exc;
	inc = exc = 0;

	if(wt[n-1]<=c){
		inc = price[n-1] + profit(n-1, c-wt[n-1],wt,price);	
	}
	exc = profit(n-1,c,wt,price);

	ans = max(inc,exc);
	return ans;
}

int main(){

	int weight[] = {1,2,3,5};
	int price[] = {40,20,30,100};
	int n=4, c=7;
	cout<<profit(n,c,weight,price);
	return 0;
}