#include <iostream>
#include <iomanip>

using namespace std;

struct date{
    int day,month,year;
    date (int _day, int _month, int _year){
        day = _day;
        month = _month;
        year = _year;
    }
      date getNextDay(){
      	 if( year%4==0&&year%100!=0 || year%400 == 0)
        {
        	int day_of_month[] = {31,29,31,30,31,30,31,31,30,31,30,31};
	        if (day > day_of_month[month - 1] || month > 12 ){
	            date next(1,1,-1);
	           return next;
	        }
	        else if( day == day_of_month[month - 1] && month == 12){
	            date next(1,1,year+1);
	            return next;
	        }
	        else if(day == day_of_month[month - 1] ){
	            date next(1,month+1,year);
	            return next;
	        }
	        else {
	            date next(day+1,month,year);
	            return next;
	        }
	}
		else{
		int day_of_month[] = {31,28,31,30,31,30,31,31,30,31,30,31};
	         if (day > day_of_month[month - 1] || month > 12 ){
	            date next(-1,1,1);
	           return next;
	        }
	        else if( day == day_of_month[month - 1] && month == 12){
	            date next(1,1,year+1);
	            return next;
	        }
	        else if(day == day_of_month[month - 1] ){
	            date next(1,month+1,year);
	            return next;
	        }
	        else {
	            date next(day+1,month,year);
	        }
      	
    }
}
    void printdate(){
        cout<<setfill('0')<<setw(2)<<day<<"/"<<setfill('0')<<setw(2)<<month<<"/"<<year;
    }
};

int main() {
    int d,m,y;
    char rad1,rad2;
    cin>>d>>rad1>>m>>rad2>>y;
    date ngay(d,m,y);
    date mai = ngay.getNextDay();
    if( mai.day == -1){
    	cout<<"INVALID";
	}
	else{
		
		mai.printdate();
	}
   
}
