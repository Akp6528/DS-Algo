#include<iostream>
using namespace std;

void magical_park(char park[][100],int m,int n,int k,int s){
    bool success = true;

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            char p = park[i][j];
            if( s < k){
                success = false;
                break;
            }
            if(p == '*')
                s+=5;
            else if(p == '.')
                s-=2;
            else
                break;
            if(j!= n-1)
                s--;
        }
    }
    if(success) {
        cout<<"Yes"<<endl;
        cout<<s<<endl;
    }
    else
        cout<<"No"<<endl;
}

int main(){

char park[100][100];
int m,n,s,k;

cin>>m>>n>>k>>s;
for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
        cin>>park[i][j];
    }
}
magical_park(park, m,n,k,s);
return 0;
}
