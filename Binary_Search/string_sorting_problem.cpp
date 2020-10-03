#include<iostream>
using namespace std;
#include<cstring>
#include<algorithm>

string extract(string ch, int key) {

	char *ptr = strtok((char *)ch.c_str()," ");
	while(key > 1){
		ptr = strtok(NULL," ");
		key--;
	}
	return (string)ptr;
}

int convertToInt(string s) {
	int p = 1;
	int ans = 0;
	for(int i=s.length()-1; i>=0; i--){
		ans += ((s[i]-'0')*p);
		p = p*10;
	}
	return ans;
}

bool numcompare(pair<string, string>s1, pair<string, string>s2){
	string key1,key2;
	key1 = s1.second;
	key2 = s2.second;
	return convertToInt(key1) < convertToInt(key2);
}

bool lexico(pair<string, string>s1, pair<string, string>s2){
	string key1,key2;
	key1 = s1.second;
	key2 = s2.second;
	return key1 < key2;
}


int main() {

	int n;
	cin>>n;
	cin.get();
	string str[1000];


	for (int i = 0; i < n; ++i)
	{
		getline(cin,str[i]);
	}

	int key;
	string reverse, order;
	cin>>key>>reverse>>order;

	pair<string,string> s[1000];

	for(int i=0; i<n; i++){
		s[i].first = str[i];
		s[i].second = extract(str[i], key);
	} 

	if(order == "numeric") {
		sort(s, s+n, numcompare);
	}
	else {
		sort(s, s+n, lexico);
	}

	if(reverse == "true"){
		for (int i = 0; i < n/2 ; ++i)
		{
			swap(s[i],s[n-i-1]);
		}
	}
  	
  	for(int i=0; i<n; i++){
  		cout<<s[i].first <<endl; 
  	}
return 0;	
}
