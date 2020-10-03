


#include<iostream>
using namespace std; 

int lsum(int a[], int n) 
{ 
	int curr_sum = 0, max_sum = 0;  
	for (int i = 0; i < n; i++){
        curr_sum += a[i];
        if (curr_sum < 0){
            curr_sum = 0;
        }
        max_sum = max(curr_sum, max_sum);
    }
	return max_sum; 
}


int maxcirsum(int a[], int n) 
{ 
	int maxvalue = lsum(a, n); 
    int max_corner = 0 ; 
	for (int i = 0; i < n; i++) {
			max_corner += a[i];  
			a[i] = -a[i];  
        }
		max_corner +=  lsum(a, n);
    if(max_corner > maxvalue)
        return max_corner;
    else
        return maxvalue;
} 


int main() 
{ 
    int t,n;
    cin>>t;
    int a[1000000];
    while(t--){
        cin>>n;
        for(int i=0; i<n; i++)
            cin>>a[i];
        cout <<maxcirsum(a, n) << endl; 
    }
	return 0; 
} 

