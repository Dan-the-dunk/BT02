#include<iostream>
using namespace std;

bool isPrime(int n){
    
    for(int i = 2 ; i < n/2 + 1; i ++ ){
        if(n%i == 0) return false;
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    if(n < 2) cout<<"YES";
    else{ 
    if(  isPrime(n) == false )cout<<"NO";
    else cout<<"YES";
    }
}