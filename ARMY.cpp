#include <iostream>
#include<algorithm>
using namespace std;

int main (){
	
	int cases, armyG, armyMg;
	
	cin >> cases;
	
	while( cases-- ){
		cin >> armyG >> armyMg;
		
		int arrayA[armyG], arrayB[armyMg];
		
		for( int i = 0; i < armyG; i++ ){
			cin >> arrayA[i];
		}
		
		for( int i = 0; i < armyMg; i++ ){
			cin >> arrayB[i];
		}
		
		sort( arrayA, arrayA + armyG );
		sort( arrayB, arrayB + armyMg );
		
		(arrayA[armyG-1] >= arrayB[armyMg-1]) ? cout << "Godzilla" << endl : cout << "MechaGodzilla" << endl;
		
	}

	return 0;
}

