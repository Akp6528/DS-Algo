#include<iostream>
using namespace std;
#include<cstring>

int main(){

	char s[100] = "Today is a rainy day";

	char *ptr =  strtok(s," ");
	cout<<ptr<<"\n";

	while(ptr != NULL){
		ptr = strtok(NULL, " ");
		cout<<ptr<<endl;
	} 

return 0;
}