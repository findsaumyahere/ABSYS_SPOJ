#include <iostream>

using namespace std;

int main (){
	
	unsigned long long cases, candy, kids , sum = 0 ,i;
	
	cin >> cases;
	
	while( cases -- > 0 ){
		cin >> kids;
		sum = 0;
		for( i = 0; i < kids; i++ ){
			cin >> candy;
			sum = (candy% kids + sum%kids )%kids ;
			
		}
		
		if( sum == 0 ){
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
		
	
	}


	return 0;
}

