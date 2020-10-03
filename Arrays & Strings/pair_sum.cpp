#include<iostream>
using namespace std;
#include<string>

int main(){

int a[] ={2,4,5,6,7,8,9,10,15};
int k =12;
int i=0;
int j= sizeof(a)/sizeof(int)-1;
while(i<j) {
    int sum = a[i] + a[j];
    if(sum < k){
        i++;
    }
    else if(sum > k){
        j--;
    }
    else if(sum == k){
        cout<<a[i]<<" and "<<a[j] << endl;
        i++;
        j--;
    }
}
return 0;
}



