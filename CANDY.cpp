#include <iostream>

using namespace std;

int main (){
	int i, pack;
	
	cin >> pack;
	
	while( pack != -1 ){
		
		int array[ pack ], ans = 0, temp, sum = 0;
		
		for ( i = 0; i < pack; i++ ){
			cin >> array[i];
			sum += array[i];
		}
		
		temp = sum/pack;
		
		if( temp*pack == sum ){
			for( i = 0; i < pack; i++ ){
				if( temp > array[i] ){
					ans +=  temp - array[i];
				}
			}
		} else {
				ans = -1;
		}
		
		cout << ans << endl;
		cin >> pack;
	}
	

	return 0;
}

