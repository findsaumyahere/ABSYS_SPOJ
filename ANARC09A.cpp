#include <iostream>
#include<stack>
#include<cstring>

using namespace std;

char input[2001];

int main ( void ){
	
	cin >> input;
	int count = 1;
	
	while( input[0] != '-' ) {
		
		stack < char > s;	
		int length = strlen( input ), res = 0;
		
		for( int i = 0; i < length; i++ ) {
			
			if ( input[i] == '{' )
				s.push( input[i] );
			else{
				 if( !s.empty() )
				 	s.pop();
				else {
					res += 1;
					s.push( '{' );
				}
			}
		}
		
		if( !s.empty() ) {
			res += s.size()/2;
		}
		
		cout << count++ << ". " << res << endl;
		cin >> input;
		 
	}
	
	
	return 0;
}
 
