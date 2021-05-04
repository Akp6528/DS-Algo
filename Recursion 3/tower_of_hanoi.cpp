#include<iostream>
using namespace std;

void shift(int n, char src, char helper, char dest){
	if(n==0)
		return ;
	shift(n-1, src,dest,helper);
	cout<<"Shift Disk "<<n<<" from "<<src<<" to "<<dest<<endl;
	shift(n-1,dest,src,helper);
}

int main(){
int n;
cin>>n;
shift(n,'A','B','C');
return 0;
}


