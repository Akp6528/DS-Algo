#include<iostream>
using namespace std;
#include <cstring>

void duplicate(char a[]){

    int l = strlen(a);
    if(l==1 || l==0){
        return ;
    }
    int prev=0;
    for(int curr=1; curr<l; curr++){
            if(a[curr] != a[prev]){
                prev++;
                a[prev] = a[curr];
            }
    }
    a[prev+1] = '\0';
return ;
}

int main(){

char ch[100];
cin.getline(ch, 100);
duplicate(ch);
cout<<ch;
return 0;

}
