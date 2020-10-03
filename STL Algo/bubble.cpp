#include<iostream>
#include<ctype.h>
using namespace std;

bool compare(int a, int b){
return b < a;

}


void bubble(int a[], int n){
    for(int i=0; i<n; i++) {
        for(int j=0; j<(n-i-1); j++){
            if(compare(a[j], a[j+1])){
                swap(a[j], a[j+1]);
            }
        }
    }

}

int main() {

int n;
int a[10];
cin>>n;
for(int i=0; i<n; i++){
    cin>>a[i];
}
bubble(a,n);

for(int i=0; i<n; i++){
    cout<<a[i]<<" ";
}
return 0;
}
