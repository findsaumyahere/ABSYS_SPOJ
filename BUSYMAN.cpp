#include <iostream>
#include<algorithm>

using namespace std;

struct job{
	int start, finish;
};

bool comparision( job a, job b ){
	return( a.finish < b.finish );
}

int busyMan( job arr[], int n ){
	
	int work = 1;
	sort( arr, arr + n, comparision );
	
	int i = 0;
	for( int j = 1; j < n; j++ ){
		if( arr[j].start >= arr[i].finish ){
			work++;
			i = j;
		}
	}
	return work;
}


int main ( void ){
	
	int cases, n;
	cin >> cases;
	
	while( cases-- ){
		cin >> n;
		job arr[n];
		
		for( int i = 0; i < n; i++ ){
			cin >> arr[i].start >> arr[i].finish;
		}
		
		cout << busyMan( arr, n ) << endl;
	}

	return 0;
}

