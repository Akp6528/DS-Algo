#include<iostream>
using namespace std;
#include<list>

int main(){

list<int> l;

list<int>l1{1,2,3,4,5};

list<string>l2{"apple","guava","mango"};
l2.push_back("grapes");

l2.sort();

l2.reverse();
for(string s:l2){
	cout<<s<<"-->";
}
cout<<endl;

l2.pop_front();
l2.pop_back();

l2.push_front("kiwi");
l2.push_back("lemon");

cout<<l2.front()<<endl;
cout<<l2.back()<<endl;

cout<<endl;

l2.push_back("lemon");
l2.push_back("lemon");

for(auto it=l2.begin(); it!=l2.end(); it++){
    cout<<(*it)<<"-->";
}


string f;
cin>>f;

l2.remove(f);
cout<<endl;

for(string s:l2){
	cout<<s<<"-->";
}

auto it = l2.begin();
it++;it++;
l2.erase(it);
cout<<endl;

for(string s:l2){
	cout<<s<<"-->";
}

cout<<endl;
auto its = l2.begin();
its++;

l2.insert(its,"fruitJuice");

for(string s:l2){
	cout<<s<<"-->";
}

return 0;
}