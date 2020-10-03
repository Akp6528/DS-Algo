#include<iostream>
using namespace std;
#include <cstring>

bool palindrome(char a[]){

    int i=0;
    int j=strlen(a)-1;
    while(i<=j){
        if(a[i]==a[j]){
            i++; j--;
        }
        else{
            return false;
        }
    }
return true;
}

int main(){

char ch[100];
cin.getline(ch, 100);

if(palindrome(ch)){
    cout<<"Its palindrome ";
}
else
    cout<<"Not ";
return 0;
}
