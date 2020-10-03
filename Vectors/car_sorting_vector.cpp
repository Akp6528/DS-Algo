#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>


class Car{
    public:
        int x;
        int y;
        string name;

        Car(){ }
        Car(string s, int x, int y){
            name = s;
            this->x = x;
            this->y = y;
        }
        int dist(){
            return x*x + y*y;
        }
};



bool compare(Car A, Car B){

    int da = A.dist();
    int db = B.dist();
    
    if(da == db){
        return A.name.length()< B.name.length();
    }
    return da < db ;
}


int main(){

    int n;
    cin>>n;
    vector<Car>v;

    for(int i=0; i<n; i++){
        int x,y;
        string name;
        cin>>name>>x>>y;
        Car temp(name,x,y);
        v.push_back(temp);
    }
    sort(v.begin(), v.end(), compare);

    for(auto c:v){
        cout<<"Car "<<c.name<<" Dist "<<c.dist()<<" Location "<<c.x<<","<<c.y<<endl;
    }


	return 0;
}