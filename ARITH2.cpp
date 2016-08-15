#include <iostream>

using namespace std;

int main (){
	long long int value, input, cases;
	
	cin >> cases;
	
	while( cases -- ){
		char sign;
		value = 0;
		
		cin >> value;
		while( 1 ){
			
			cin >> sign;
			if( sign == '=' ) break;
			
			cin >> input;
			
			
			if( sign == '+') value += input;
			if( sign == '-') value -= input;
			if( sign == '*') value *= input;
			if( sign == '/') value /= input;
			
			
		}
		
		cout << value << endl;
		
	}

	return 0;
}

