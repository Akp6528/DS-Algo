#include<iostream>
using namespace std;

void generate(char in[], char out[], int i, int j){

	if(in[i] == '\0'){
		out[j] = '\0';
		cout<<out<<endl;
		return ;
	}

	out[j] = in[i];
	generate(in,out,i+1,j+1);
	generate(in,out,i+1,j);

}

int main(){
	char a[] = "abcd";
	char b[100];
	generate(a,b,0,0);


return 0;	
}