


#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>


int main(){

    int a[] = {1,2,5,10,20,50,100,200,500,2000};
    int n = sizeof(a)/sizeof(int);

    rotate(a, a+2, a+n);

    for(int i=0; i<n; i++)
        cout<<a[i]<< " ";

    cout<<endl;

    vector <int> v {1,2,5,10,20,50,100,200,500,2000};

    rotate(v.begin(), v.begin()+3 , v.end());

    for(int i=0; i< v.size(); i++){
        cout<< v[i]<<" ";
    }

    next_permutation(v.begin(), v.end());
    next_permutation(v.begin(), v.end());
    next_permutation(v.begin(), v.end());
    next_permutation(v.begin(), v.end());
    

    cout<<endl;
    for(int x:v){
        cout<<x<<" ";
    }


return 0;
}