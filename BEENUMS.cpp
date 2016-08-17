#include <iostream>
#include<cmath>

using namespace std;

int main (){
	
	long long int numb, i, d;
	long double k;
	
	cin >> numb;
	
	while( numb != -1 ){
		
		k = (( -3 + sqrt( -3 + 12 * numb ))/ 6);
		
		d = int( k );
		
		if( d - k  == 0){
			cout <<"Y" << endl ;
		} else {
			cout << "N" << endl;
		}
		
		
	
		cin >> numb;
	}
		
		
	 
	

	return 0;
}

