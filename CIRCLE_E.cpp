#include <iostream>
#include<cmath>

using namespace std;

int main ( void ){
	double r1, r2, r3, r4, k1, k2, k3, k4;
	int  cases;
	
	cin >> cases;
	while( cases-- ){
		cin >> r1 >> r2 >> r3 ;
		k1 = 1/r1;
		k2 = 1/r2;
		k3 = 1/r3;
		
		k4 = k1 + k2 + k3 + 2* sqrt( k1 * k2 + k2 * k3 + k3 * k1 );
		r4 = 1/k4;
		
		printf( "%.6lf\n\n", r4 );
	
	}

	return 0;
}

