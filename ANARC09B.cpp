#include <iostream>

using namespace std;

#define i64 long long


i64 gcd(  i64 a, i64 b ) {
	if( b == 0 ) return a;
	return gcd( b, a % b );
}

i64 lcm( i64 a, i64 b ) {
	return a / gcd( a, b ) * b ;
}


int main ( void ){
	
	int a, b;
		
	while(scanf("%d%d", &a, &b)==2 && a + b) {
		i64 lcmv = lcm( a, b);
		printf( "%lld\n", ( lcmv / a ) * ( lcmv / b ) );	
		
	}

	return 0;
}

