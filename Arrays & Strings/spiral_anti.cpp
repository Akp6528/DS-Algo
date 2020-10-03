#include<iostream>
using namespace std;

void spiral(int a[][100], int m, int n) {

    int startRow = 0;
    int startCol = 0;
    int endRow = m-1;
    int endCol = n-1;

    while(startRow <= endRow and startCol <= endCol){

    // 1
        for(int i=startRow; i<=endRow; i++)
            cout<<a[i][startCol]<<", ";
        startCol++;

    //2
        for(int i=startCol; i<=endCol; i++)
            cout<<a[endRow][i] <<", ";
        endRow--;

    //3
        if(endRow > startRow){
        for(int i=endRow; i>=startRow; i--)
            cout<<a[i][endCol]<<", ";
        endCol--;
        }
    //4
        if(endCol > startCol) {
        for(int i=endCol; i>=startCol; i--)
            cout<<a[startRow][i]<<", ";
        startRow++;
        }
    }
}

int main(){


int a[100][100] ;
int m,n;
cin>>m>>n;

for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
        cin>>a[i][j];
    }
}
spiral(a,m,n);
cout<<"END";
return 0;
}
