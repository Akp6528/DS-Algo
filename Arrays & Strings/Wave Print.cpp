#include<iostream>
using namespace std;

int main(){

int m, n;
cin>>m>>n;
int a[1000][1000] = {0};
int v=1;
for(int i=0; i < m; i++){
    for(int j=0; j<n; j++){
        a[i][j] = v;
        v++;
        cout<<a[i][j] << " ";
    }
    cout<<endl;
}
return 0;
}
