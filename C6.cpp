#include<iostream>
using namespace std;
int main(){

    int n1,n2;
    cin>>n1;
    cout<<n1<<" ";
    while(cin>>n2){
        if(n2 != n1 ) cout<<n2<<" ";
        n1 = n2;
    }


}