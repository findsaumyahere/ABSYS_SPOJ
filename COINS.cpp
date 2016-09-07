#include <iostream>
#include<map>

using namespace std;

map<long long , unsigned long long > coins;

unsigned long long max( long long n, unsigned long long k ){
	 return (( n > k ) ? n : k );
}

unsigned long long int  f( long long  n ){
	
	if( n == 0 ) return 0;
	
	unsigned long long int a = coins[n];
	
	if( a == 0 ){
		a = max( n , ( f( n/2 ) + f( n/3 ) + f( n/4 )));
		coins[n] = a;
	}
	
	return a;
}



int main (){
	unsigned long long n;
	int cases =10 ; 
	
	coins.clear();

	
	while( cases-- ){
	
		cin >> n;
		cout << f(n) << endl;
			
	}

	return 0;
}

