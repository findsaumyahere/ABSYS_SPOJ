#include <iostream>

using namespace std;

int dp[101][101];

int max( int a , int b ){
	return ( a > b ? a : b );
}


int main (){
	int cases, h, w, i, j;
	
	cin >> cases;
	
	while( cases -- ){
		
		cin >> h >> w;
		
		
		for( i = 1; i < h+1; i++ ){
			dp[i][w+1] = 0;
		}
		
		for( i = 1; i < h+1; i++ ){
			for( j = 1; j < w+1; j++ ){
				cin >> dp[i][j];
			}
		}
		
		
		for( i = h-1; i > 0; i-- ){
			for( j = 1; j < w+1; j++ ){
				
				dp[i][j] += max( max( dp[i+1][j-1], dp[i+1][j] ), dp[i+1][j+1] );
				
			}
		}
		
	 j = 0;
		
		for( i = 1; i < w+1; i++ ){
			j = max( j, dp[1][i] );
		}
		cout << j << endl;
	}

	return 0;
}

