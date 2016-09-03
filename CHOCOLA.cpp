#include <iostream>
#include<algorithm>

using namespace std;

int x[1001], y[1001];

int main ( void ){
	
	int cases, m, n, i, j, v, h, sum, ans;
	
	cin >> cases;
	while( cases-- ) {
		
		cin >> m >> n;
		
		for( i = 0; i < m-1; i++ )
			cin >> x[i];
			
		for( j = 0; j < n-1; j++ )
			 cin >> y[j];
			 
		h = 1, v = 1, sum = 0, ans = 0, i = 0, j = 0;
		
		sort( x, x + ( m-1 ) );
		reverse( x, x + ( m-1 ) );
		
		sort( y, y + ( n-1 ) );
		reverse(y, y + ( n-1 ));
		
		
		while( i < m-1 && j < n-1 ) {
			if( x[i] > y[j] ) {
				ans += x[i] * v;
				h++, i++;
			} else {
				ans += y[j] * h;
				v++, j++ ;
			}
		}
		if( i < m-1 ) {
			while( i < m-1 )
				sum += x[i++];
				
			ans += sum * v;
		} else {
			
			while( j < n-1 )
				sum += y[j++];
				
			ans += sum *h;
		}
		
		cout << ans << endl;
	}
		


	return 0;
}

