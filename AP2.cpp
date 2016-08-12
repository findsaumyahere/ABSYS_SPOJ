
/* Input:
1
3 8 55

Output:
10
1 2 3 4 5 6 7 8 9 10

NOTE - In all the test cases all the series elements are positive integers.
The series will have at least 7 elements.
number of test cases <=100.
All the numbers will fit in 64 bits(long long in C)
*/

#include<iostream>

using namespace std;

int main()
{
	 long long int thirdNo, lastThird, Sn, cases, d, a, n;
	
	cin >> cases;
	
	for ( int i= 0; i< cases; i++){
		cin >> thirdNo >> lastThird >> Sn;
		
		n = ( Sn*2 / ( thirdNo+ lastThird ));
		
		if( n < 7){
			return 0;
		}
		
		cout << n << endl;
		
		d = (lastThird- thirdNo)/( n - 5);
		a = thirdNo - 2*d;
		
		for ( int i= 0; i< n; i++){
			cout << a+ i*d << " " ;
		}
		cout << endl;
	}
	
	
	return 0;
	
}
