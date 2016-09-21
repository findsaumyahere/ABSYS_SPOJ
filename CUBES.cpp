// a^3 = b^3 + c^3 + d^3

#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int a, b, c, d, n;
	
		for ( int n = 6; n <= 100; n++ ){
			a = n*n*n;
			for( int i = 2; i < n; i++  ){
				b = i*i*i;
				for( int j = i; j < n; j++ ){
					c = j*j*j;
					for( int k= j; k < n; k++ ){
						d = k*k*k;
						if( a == (b + c + d) ){
						
							cout << "Cube = " << n << ", " <<"Triple = (" << i << "," << j << "," << k << ")"  << endl;
						}
					}
				}
			}
			
		}
		
		return 0;
}
