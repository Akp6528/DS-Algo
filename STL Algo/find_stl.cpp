#include <iostream>
using namespace std;
#include<algorithm>

int main(){

int a[] = { 1,2,3,4,5 };

int n = sizeof(a)/sizeof(int);

int key;
cin>>key;

int* t = find(a,a+n,key);

int* index = t - a;

if(index == n)
    cout<<"Not Found ";
else
    cout<<"Present at "<<index;

return 0;
}