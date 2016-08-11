#include <iostream>

using namespace std;

int main ( void ){
	
	int cases, n;
	cin >> cases;
	
	while( cases-- ) {
		cin >> n;
		cout << ( ( n%2 == 0 ) ? n/2 : n/2 + 1 ) << endl;
	}

	return 0;
}

