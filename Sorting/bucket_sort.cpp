
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>


class student {

public:
	int marks;
	string name;
};

void bucket_sort(student s[], int n){

	vector<student> v[101];
    vector<student>::iterator it;
	for(int i=0; i<n; i++){
		int m = s[i].marks;
		v[m].push_back(s[i]);  
	}

	for(int i=100; i>=0; i--){
		for(it = v[i].begin(); it!=v[i].end(); it++ ){
		    cout<<(*it).marks<< " "<< (*it).name << endl;
		}
	}
}

int main(){

	student s[1000];
	int n;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>s[i].marks>>s[i].name;
	}
	bucket_sort(s,n);

return 0;
}