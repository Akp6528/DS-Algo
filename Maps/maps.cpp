#include<iostream>
using namespace std;
#include<map>
#include<string>
int main(){

	map<string, int > m;
	//Insert 
	m.insert(make_pair("Mango",100));

	pair<string, int >p;
	p.first = "Apple";
	p.second = 120;

	m.insert(p);

	m["banana"] = 20;

	//2. Search 
	string fruit;
	cin>>fruit;

    m[fruit] += 200;


	map<string, int>:: iterator it = m.find(fruit);
	if(it!=m.end()){
		cout<<"price of "<<fruit<<" is"<<m[fruit]<<endl;
	}
	else {
		cout<<"fruit is not present "<<endl;
	}
    //m.erase(fruit);
    if(m.count(fruit)){
        cout<<"Price of "<<fruit<<m[fruit]; 
    }
    else {
        cout<<"Not Found";
    }

    m["litchi"] = 60;
    m["pineapple"] = 80;

    for(auto it=m.begin(); it!=m.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }


return 0;
}
