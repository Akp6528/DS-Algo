
#include<iostream>
using namespace std;

int first_occurence(int arr[], int n, int k){
    int s = 0;
    int e = n-1;
    int ans = -1;

    while(s<=e) {

       int mid = (s+e)/2;
    
        if(arr[mid] == k){
            ans = mid;
            e = mid -1;
        }
        else if(arr[mid] > k){
            e = mid -1;
        }
        else{
            s = mid + 1;
        }
    }
    return ans;
}

int last_occurence(int arr[], int n, int k){

    int s = 0;
    int e = n-1;
    int ans = -1;

    while(s<=e) {

       int mid = (s+e)/2;
    
        if(arr[mid] == k){
            ans = mid;
            s = mid + 1;
        }
        else if(arr[mid] > k){
            e = mid -1;
        }
        else{
            s = mid + 1;
        }
    }
    return ans;
}


int main(){

    int arr[100];
    int key;
    
    int n;
    cin>>n;

     for(int i=0; i<n; i++)
        cin>>arr[i];
    cin>>key;
    cout<<first_occurence(arr,n,key);
    cout<<"\n"<<last_occurence(arr,n,key);

return 0;
}