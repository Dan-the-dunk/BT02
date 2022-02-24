#include<iostream>
#include<iomanip>
using namespace std;

struct date{
    int d,m,y;
    date(int _d ,int _m , int _y ){
        d = _d;
        m = _m;
        y = _y;
    }
    date getnextd(int k){
        int day_of_month[] = {31,28,31,30,31,30,31,31,30,31,30,31};

        if( y%4 == 0 && y%100 != 0 || y%400 == 0){
            day_of_month[1]++;
        }

	         if (d > day_of_month[m - 1] || m > 12 ){
	            date next(-1,1,1);
	            return next;
	        }
            else if( d + k > day_of_month[m - 1]){
                if( m == 12 ){
                    date next( (k -(day_of_month[m - 1] - d) ), 1 , y+1);
                    return next;
                }
                else{
                    date next( (k -(day_of_month[m - 1] - d) ), m + 1 ,y);
                    return next;
                }
	       }
            else{
                date next( d+k , m ,y);
                return next;
            }

        date result(1,1,-1);;
        return result;
    }

    void printdate(){
        cout<<setfill('0')<<setw(2)<<d<<"/"<<setfill('0')<<setw(2)<<m<<"/"<<y<<endl;
    }

};

int main(){
    int d,m,y,k;
    char rad;
    cin>>d>>rad>>m>>rad>>y;
    cin>>k;
    date input(d,m,y);
    while(k != 0 ){
        date res = input.getnextd(k);
        if(res.d == -1 ) {
            cout<<"INVALID";
            break;
            }
        else{
            res.printdate();
        }
        cin>>k;
    }

    
    
}