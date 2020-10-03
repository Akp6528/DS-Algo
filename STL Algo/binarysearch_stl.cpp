#include <iostream>
using namespace std;
#include<algorithm>

int main(){

int a[] = { 1,2,3,4,5 };

int n = sizeof(a)/sizeof(int);

int key;
cin>>key;

bool present = binary_search(a,a+n,key);
if(present)
    cout<<"Found ";
else
    cout<<"Not Found!! ";

return 0;
}