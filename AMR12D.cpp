#include <iostream>
#include<algorithm>
#include<cstring>

using namespace std;



int pal( char *string ) {
	
	int i, j, l = strlen( string ) - 1;
	for( i = 0, j = l; i < j; i++, j-- ) {
		if( string[i] != string[j] )
			return 0;
			
	}
	return 1;
}

int main ( void ){
	
	int cases;
	char string[11];
	
	cin >> cases;
	while( cases-- ) {
		cin >> string;
		
		if( pal ( string ) ) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}

	return 0;
}

