#include <iostream>
#include<algorithm>

using namespace std;

int main ( void ){
	
	int cases, size, diff, min;
	cin >> cases;
	
	while( cases -- ){
		
		cin >> size >> diff;
		int array[size];
		
		for( int i = 0; i < size; i++ ){
			cin >> array[i];
		}
		
		sort( array, array + size );
		
		min = array[diff-1] - array[0];
		
		for( int i = 0; i < size-diff+1; i++ ){
			
			if( ( array[i+diff-1] - array[i] ) < min ){
				min =  array[i+diff-1] - array[i];
			}
		}
		
		cout << min << endl;
		
	}

	return 0;
}

