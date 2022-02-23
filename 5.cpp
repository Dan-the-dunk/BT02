#include<iostream>
using namespace std;

struct date{
    int d,m,y;
    date(int _d ,int _m , int _y ){
        d = _d;
        m = _m;
        y = _y;
    }


};

int main(){
    int d,m,y;
    char rad;
    cin>>d>>rad>>m>>rad>>y;
    date res(d,m,y);

    int k;
    cin>>k;
}