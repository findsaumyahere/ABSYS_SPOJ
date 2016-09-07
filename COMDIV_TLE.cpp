#include <iostream>
#include<cmath>


using namespace std;

int gcd( int a, int b ){
	if( a % b == 0 )
		return b;
	else 
		return gcd( b, a%b );
}

int main ( void ){
	int cases, a, b, g, ans, j;
	float sqt;
	cin >> cases;
	
	while( cases-- ){
		cin >> a >> b;
		
		if ( a > b )
			g = gcd( a, b );
		else 
			g = gcd( b, a );
			
		sqt = sqrt( g );
		ans = 0;
		for( j = 1; j <= sqt; j++ ){
			if( g%j == 0 ){
				ans += 2;
				
				if( j == g/j ){
					ans--;
				}
			} 
		}
			
		cout << ans << endl;	
			 			
	}

	return 0;
}

