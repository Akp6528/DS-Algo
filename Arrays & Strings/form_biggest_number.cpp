#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool cmp(int a,int b){
    string p = to_string(a);
    string q = to_string(b);
    string pq =p.append(q);
    string qp =q.append(p);
    
    return (pq).compare(qp)>0?1:0;
}
int main() {
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int arr[n]; for(int i=0;i<n;i++) cin>>arr[i];
        sort(arr,arr+n,cmp);
        for(int i=0;i<n;i++) cout<<arr[i];
        cout<<endl;
    }
    //code
    return 0;
}
