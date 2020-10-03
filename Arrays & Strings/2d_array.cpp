#include<iostream>
using namespace std;

int main(){

int a[100][100] = {0};
int v = 1;

for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        a[i][j] = v;
        v+=1;
        cout<<a[i][j] <<" ";
    }
    cout<<endl;
}

return 0;
}
