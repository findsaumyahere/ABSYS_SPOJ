#include <iostream>

using namespace std;

unsigned long long mod = 1000007;

int main (){
	
	unsigned long long cases, numb, level;
	
	cin >> cases;
	
	
	while( cases -- ){
		
		cout << endl;
		cin >> level;
		
		numb = (3*level* ( 1 + level )/ 2 - level) % mod;
		
		cout <<  numb << endl;
		
	}

	return 0;
}

