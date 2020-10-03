


#include <iostream>
#include <cstring>
using namespace std;

int digit(char);

int main() {
    char a[100], b;
    cin>>a;
    for(int i = 0 ; i < strlen(a) ; i++) {
        if(i == 0) {
            if(a[i] == '9')
                continue;
        }
        b = digit(a[i]);
        if(a[i] > b)
            a[i] = b;
    }
    cout<<a;
    return 0;
}

int digit(char t) {
    return '9' - t + 48;
}
