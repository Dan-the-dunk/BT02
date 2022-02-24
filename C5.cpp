#include<iostream>
using namespace std;


string stoa(int n ){
    string str[9] =  {"one","two","three","four","five","six","seven","eight","nine"};
    for (int  i = 1; i < 10 ; i++)
    {
        if(n == i ) return str[i-1];
    }
}
string stoa2(int n ){
    string str[8] =  {"twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
    for (int  i = 1; i < 10 ; i++)
    {
        if(n == i ) return str[i-2];
    }

}
string stoa3(int n ){
    string str[9] =  {"eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
    for (int  i = 1; i < 10 ; i++)
    {
        if(n == i ) return str[i-1];
    }
    

}

void result( int arr[] ,int n ){
   
     for(int i = n - 1 ; i >= 0 ; i -- ){
        if( i == 2 ){
            	if(arr[2] == 0 ){
				}
				else{
                cout<<stoa(arr[2])<<" hundred ";
            }
            }
            if(i == 1){
                if( arr[1] == 1){
					
					if(arr[0 ] == 0 ){
						cout<<"ten ";
						break;
					}
					else{
				        cout<<stoa3(arr[0]);
                    break;
               		}
                }
                
            	else if(arr[1] == 0 ){
					if(arr[0] == 0){
                	
						break;	
					}
				}
                
                else{
                	if(arr[0] == 0){
                		cout<<stoa2(arr[1])<<" ";
						break;	
					}
					else{
                       	cout<<stoa2(arr[1])<<"-";
                	}
                }
        	}
            
            if(i == 0 ) {
                cout<<stoa(arr[0]);
            }

    }

}

int main(){
	int num,arr[9], n = 0 ;
	cin>>num;
	if(num < 0){
		cout<<"negative ";
		num = - num;
	}
	while(num > 0 ){
		arr[n] = num%10;
		num/=10;
		n++;
	}
	int so[3] = {}, count = 0;
	for(int i = n - 1 ; i >= 0  ; i -- ){
		
		so[2 - count] = arr[i];
		count++;
		if( i == 6 ){
			
			
			if( count == 1 ){
				so[0] = so[2];
			}
			if( count == 2 ){
				
				so[0] = so[1];
				so[1] = so[2];
			}

			result( so , count);
			cout<<" million ";
			count=0;
		}
		
		if( i == 3){
			
			if( count == 1 ){
				so[0] = so[2];
			}
			if( count == 2 ){
				
				so[0] = so[1];
				so[1] = so[2];
			}
		
			result( so , count);
			if( so[2] == 0 && so[1] == 0 && so[0] == 0){
				count = 0;
				
			}
			else{
				cout<<" thousand ";
				count= 0;
		
			}
		}
		
		if( i == 0){
			
			if( count == 1 ){
				so[0] = so[2];
			}
			if( count == 2 ){
				
				so[0] = so[1];
				so[1] = so[2];
			}

			result( so , count);
			count= 0;
			
			
		}
		
		
		
		
		
	}

}
