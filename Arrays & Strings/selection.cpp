#include<iostream>
#include<ctype.h>
using namespace std;

void selection(int a[], int n) {

    for(int i=0; i<n-1; i++){
        int l = i;
        for(int j=i; j<n; j++){
            if(a[j] < a[l]){
                l = j;
            }
        }
        swap(a[i],a[l]);
    }
}
int main(){
    int n;
    int a[1000];
    cout<<"Enter the no. of elements ";
    cin>>n;
    cout<<"\nEnter the elements of Array: ";
    for (int i = 0; i < n; ++i)
        cin>>a[i];
    selection(a,n);
    cout<<"\nArray After selection Sort: ";

    for(int i=0; i<n; i++)
        cout<<a[i]<< " ";
return 0;
}
