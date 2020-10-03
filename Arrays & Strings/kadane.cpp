#include<iostream>
using namespace std;

int main() {

int a[100];
int n,curr_sum = 0, max_sum = 0;
cin>>n;
for(int i=0; i<n; i++){
    cin>>a[i];
    curr_sum += a[i];
    if (curr_sum < 0){
        curr_sum = 0;
    }
    max_sum = max(curr_sum, max_sum);
}
cout<<"Sum is: " << max_sum;
return 0;
}
