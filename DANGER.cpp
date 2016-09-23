#include <iostream>
#include<cmath>

using namespace std;

//int danger( int n, int size = 1 ){
//	
//	for( ; size < n; size <<= 1 );
//	size >>= 1;
//		
//	return ( 1 +  ( n - size ) * 2 );
//}


int main ( void ){
	
	int n, z, x;
	long long i, j;
	double power;
	
	for( ; ; ) {
		( scanf( "%de%d", &n, &z ) );
			
		if( n == 0 )
			break;
			
		power =  pow( 10.0, ( double ) z );
		x = ( int )floor( log10( n * power) / log10( 2.0 ) );
		i = ( long long int ) pow( 2.0, ( double ) x );
		j = ( long long int ) ( ( n * power ) - i) * 2 + 1;
			
	
		printf( "%lld\n", j ) ;
		

	}
	

	return 0;
}

