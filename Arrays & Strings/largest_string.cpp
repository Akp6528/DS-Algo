#include<iostream>
using namespace std;
#include<cstring>

int main(){

    char ch[100],largest[100];
    int n,len=0,lar_str=0;
    cin>>n;
    cin.get();
    for(int i=0; i<n; i++){
        cin.getline(ch,100);
        len = strlen(ch);
        if(len > lar_str){
            lar_str = len;
            strcpy(largest,ch);
        }
    }
    cout<<largest<<" and length is "<<lar_str;
return 0;
}
