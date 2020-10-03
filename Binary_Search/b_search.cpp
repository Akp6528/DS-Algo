
#include<iostream>
using namespace std;

int b(int arr[], int n, int k){
    int s = 0;
    int e = n-1;

    while(s<=e) {

       int mid = (s+e)/2;
    
        if(arr[mid] == k){
            return mid+1;
        }
        else if(arr[mid] > k){
            e = mid -1;
        }
        else{
            s = mid + 1;
        }
    }
    if(s>e)
        return -1;
}

int main(){

    int arr[100];
    int key;
        
    int n;
    cout<<"Enter the no. of elements ";
    cin>>n;
    cout<<"\n Enter the elements of array "; 
     for(int i=0; i<n; i++)
        cin>>arr[i];
    cout<<"Enter the element to be searched for ";
    cin>>key;
    cout<<"Element found at position "<<b(arr,n,key);

return 0;
}