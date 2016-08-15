#include <iostream>
#include<deque>

using namespace std;

long long n, k, i, arr[10000001];

void printMax( ) {
	deque< long long > Qi( k );
	for( i = 0; i < k; i++ ) {
		while( ( !Qi.empty()) && arr[i] >= arr[Qi.back()] )
			Qi.pop_back();
			
		Qi.push_back(i); 
	}
	
	for( ; i < n ; ++i ) {
		cout << arr[Qi.front()] << " " ;
		
		while( ( !Qi.empty() ) && Qi.front() <= i-k )
			Qi.pop_front();
			
		while( ( !Qi.empty()) && arr[i] >= arr[Qi.back()]) 
			Qi.pop_back();
		  
		Qi.push_back( i );
	}
	cout << arr[Qi.front()];
	
}

int main ( void ){
	
	
	cin >> n;
	
	for( i = 0; i < n; i++ ){
		cin >> arr[i];
	}
	cin >> k;
	printMax();
	

	return 0;
}

