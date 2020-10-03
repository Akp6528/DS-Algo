

#include<iostream>
using namespace std;

int main() {
int a[1000000];
int t,n;
cin>>t;
while(t--){
cin>>n;
int curr_sum = 0, max_sum = 0;
for(int i=0; i<n; i++){
    cin>>a[i];
    curr_sum += a[i];
    if (curr_sum < 0){
        curr_sum = 0;
    }
    max_sum = max(curr_sum, max_sum);
}
cout<<max_sum<<endl;

}
return 0;
}
