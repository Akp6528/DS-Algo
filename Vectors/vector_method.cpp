#include<iostream>
using namespace std;
#include<vector>

int main(){

	vector<int> d{1,2,3,4,5};

    d.push_back(10);

    d.pop_back();

    //no. of elements btw a vector
    d.insert(d.begin()+3,4,100);

    d.erase(d.begin()+3);
    d.erase(d.begin()+2, d.begin()+5);

    cout<<d.size()<<endl;
    cout<<d.capacity()<<endl;
    
    //we avoid the shrink
    d.resize(18);
 //   cout<<d.capacity()<<endl;


    d.clear();

    if(d.empty()){
        cout<<"This is empty!!";
    }

   // cout<<d.size()<<endl;

    d.front();
    d.back();

    int n;
    cin>>n;
    vector<int >v;
    v.reserve(1000);

    for(int i=0; i<n; i++){
        int no;
        cin>>no;
        v.push_back(no);
        cout<<"Changing capacity "<<v.capacity()<<endl;
    }


	for(int i:v){
		cout<<i<<" ";
	}

	return 0;
}