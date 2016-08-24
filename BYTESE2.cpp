#include <iostream>
#include<algorithm>
#include<vector>
#include<cmath>

using namespace std;

int main ( void ){
	
	int cases;
	cin >> cases;
	
	while( cases-- ) {
		
		vector< pair< int, int > > v;
		int n, i, a, b, max = 0;
		
		cin >> n;
		for( i = 0; i < n; i++ ) {
			cin >> a >> b;
			v.push_back( make_pair( a, b ) );
		}
		
		sort( v.begin(), v.end() );
		
		for( int j = 0; j < v.size(); j++ ) {
			
			int count = 1;
			for( int k = 0; k < v.size(); k++ ) {
				if( k == j ) continue;
				if( v[k].first < v[j].second && v[k].second > v[j].second )
					count++;
			}
			if( count > max )
				max = count;
				
		}
			cout << max << endl;
		
	}

	return 0;
}

