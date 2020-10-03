#include<iostream>
using namespace std;

int main() {

int a[100];
int n,i,j,curr_sum = 0, max_sum = 0;
int l=-1, r=-1;
cin>>n;
for(int i=0; i<n; i++)
    cin>>a[i];
for(i=0; i<n; i++){
    for(j=i; j<n; j++){
        curr_sum = 0;
        for(int k=i; k<=j; k++){
            curr_sum += a[k];
        }
        if(curr_sum > max_sum){
            l = i; r = j;
            max_sum = curr_sum;
        }
    }
}
for(int k = l; k<j ; k++){
    cout << a[k] <<" ";
}
cout <<max_sum;
return 0;
}
