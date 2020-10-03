



#include<iostream>
using namespace std;

int find(int arr[], int n, int key){

    int s = 0;
    int e = n-1;
    while(s <= e){
        int mid = (s+e)/2;
        if(arr[mid] == key){
            return mid ;
        }
        else if(arr[s] <= arr[mid]){
            // 2 cases
            if(key >= arr[s] && key <= arr[mid]){
                e = mid -1;
            }
            else {
                s = mid +1;
            }
        }
        else {
            //2 cases 
            if(key >= arr[mid] && key <= arr[e]){
                s = mid + 1;
            }
            else {
                e = mid -1;
            }
        }
    }
    return -1;
}

int main(){

    int arr[1000000];
    int key;  
    int n;
    cin>>n;
     for(int i=0; i<n; i++)
        cin>>arr[i];
    cin>>key;

    cout<<find(arr,n,key);
    

return 0;
}