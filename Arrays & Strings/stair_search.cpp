#include<iostream>
using namespace std;
#include<algorithm>

void search_(int a[][100], int n, int k){

    int i=0,c=0;;
    int j=n-1;
    while(i<n && j>=0){
        if(a[i][j] < k){
            i++;
        }
        else if(a[i][j] > k){
            j--;
        }
        else if( a[i][j] == k){
            c++;
            cout<<"1";
            break;
        }
    }
    if(c != 1)
        cout<<"0";
}

int main() {

	int n,k;
	cin >> n >> k;
	int img[100][100];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> img[i][j];
		}
	}
    search_(img, n, k);

return 0;
}
