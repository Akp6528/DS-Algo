#include<iostream>
using namespace std;

void spiral(int a[][100], int m, int n) {

    int startRow = 0;
    int startCol = 0;
    int endRow = m-1;
    int endCol = n-1;

    while(startRow <= endRow and startCol <= endCol){
    // 1
        for(int i=startCol; i<=endCol; i++)
            cout<<a[startRow][i]<<" ";
        startRow++;

    //2
        for(int i=startRow; i<=endRow; i++)
            cout<<a[i][endCol] <<" ";
        endCol--;

    //3
        if(endRow > startRow){
        for(int i=endCol; i>=startCol; i--)
            cout<<a[endRow][i]<<" ";
        endRow--;
        }
    //4
        if(endCol > startCol) {
        for(int i=endRow; i>=startRow; i--)
            cout<<a[i][startCol]<<" ";
        startCol++;
        }
    }
}

int main(){

int a[100][100] ;
int m,n;
cin>>m>>n;
int v = 1;

for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
        a[i][j] = v;
        v+=1;
        cout<<a[i][j] <<" ";
    }
    cout<<endl;
}
cout<<endl;
cout<<endl;
spiral(a,m,n);

return 0;
}
