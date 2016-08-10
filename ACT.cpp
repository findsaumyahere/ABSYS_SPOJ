#include <iostream>
#include<algorithm>
#include<cstring>

using namespace std;

int main ( void ){
	
	int cases, n;
	char players[50001];
	
	cin >> cases;
	while( cases-- ) {
		
		cin >> n >> players;
		cout << players[ strlen( players ) - 1 ] << endl;
	}
	
	return 0;
}

