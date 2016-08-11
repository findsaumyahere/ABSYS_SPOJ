#include <iostream>
#include<algorithm>

using namespace std;

int n, c;


int func( int numb, int * array){
	int pos = array[0], cows = 1;
	
	for( int i = 1; i < n; i++ ){
		if( array[i] - pos > numb ){
			pos = array[i];
			cows ++;
			
			if( cows == c ){
				return 1;
			}
		}
	}
	
	return 0;
}



int binarySearch( int *array ){
	int low = 0, high = n-1, max = -1;
	
	while( low < high ){
		int mid = ( low + high )/2;
		
		if( func( mid, array ) == 1 ){
			max = mid;
			low = mid + 1;
		} else {
			high = mid;
		}
	}
	
	return max;
}


int main (){
	
	int cases;
	
	cin >> cases;
	
	while( cases -- ){
		cin >> n >> c;
		
		int array[n];
		
		for( int i = 0; i < n; i++ ){
			cin >> array[0];
		}
		
		sort( array, array + n );
		
		int k = binarySearch( array );
		cout << k << endl;
		
		
	}

	return 0;
}

