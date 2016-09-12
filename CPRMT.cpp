#include <iostream>
#include<algorithm>
#include<cstring>

# define max 111

using namespace std;

char s1[max], s2[max];
int len1, len2, dp[max][max];

void lcs() {
	
	for( int i = 1; i < len1 + 1; i++ ) {
		for( int j = 1; j < len2 + 1; j++ ) {
			
			if( s1[i-1] == s2[j-1] ) dp[i][j] = dp[i-1][j-1] + 1;
			else if( dp[i-1][j] > dp[i][j-1] ? dp[i][j] = dp[i-1][j] : dp[i][j] = dp[i][j-1] );
		}
	}
}


void print( int i , int j ) {
	if ( !i || !j ) return;
	
	if( s1[i-1] == s2[j-1] ) {
		print( i-1, j-1 );
		printf("%c",s1[i-1]);
	} else if ( dp[i][j-1] > dp[i-1][j] )
		print( i, j-1 );
	else
		print( i-1, j );
}

using namespace std;

int main ( void ){
	
	while( gets( s1 ) ) {
		gets( s2 );
		
		len1 = strlen( s1 );
		len2 = strlen( s2 );
		
		sort( s1, s1 + len1 );
		sort( s2, s2 + len2 );
		
		lcs();
		print( len1, len2 );
		cout << endl;
	}
	
	return 0;
}

