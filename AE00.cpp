#include<iostream>

using namespace std;

int main()
{
	int square, sum;
	
	cin >> square;
	sum = square;
	
	for( int i = 2; i <= square; i++ ){
		for( int j = i; j < square; j++ ){
			if( i*j > square ) break;
			sum++;
		}
	}
	cout << sum << endl;
	return 0;
	
}

