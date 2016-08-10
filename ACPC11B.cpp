#include <iostream>

using namespace std;

int main ( void ){
	
	long long int cases, a, b, min;
	cin >> cases;
	
	while( cases-- ){
		cin >> a;
		int arrayA[a + 1];
		
		for( int i = 0; i < a; i++ ){
			cin >> arrayA[i];
		}
		
		cin >> b;
		int arrayB[b + 1];
		
		for( int i = 0; i < b; i++ ){
			cin >> arrayB[i];
		}
		
		min = 1000009;
		
		for( int i = 0; i < a; i++ ){
			for( int j = 0; j < b; j++ ){
				
				int temp = arrayA[i] - arrayB[j];
				if( temp < 0 ) temp/= -1;
				
				if( temp < min ){
					min = temp;
				}
			}
		}
		
		cout << min << endl;
	}


	return 0;
}

