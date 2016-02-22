/* The first line of the input file contains an integer T specifying the number of test cases. Each test case is preceded by a blank line.

Each test case consists of exactly one line. The line represents an equation of the form "number + number = number", where each number is a positive integer. One part of the equation will be replaced by the string "machula". The string always covers a contiguous non-empty sequence of digits, possibly even an entire number. You may assume that for each equation in the input there will be exactly one way to fill in the missing digits.

Output specification

For each test case, the output shall contain one line of the form "number + number = number". The line must represent the equation from that test case with all missing digits filled in.

Example

Input:
3

23 + 47 = machula

3247 + 5machula2 = 3749

machula13 + 75425 = 77038
Output:
23 + 47 = 70
3247 + 502 = 3749
1613 + 75425 = 77038
*/

#include<iostream>
#include<cstring>
#include<cstdlib>

using namespace std;

int main()
{
	int times, x, y, z ;
	char fNo[100], sNo[100], opr[2], tNo[100], opr2[2];
	
	cin >> times;
	
	for ( int i = 0; i < times; i++ ){
		cin >> fNo >> opr >> sNo >> opr2 >> tNo;
		
		if ( strchr( fNo, 'm') != NULL ){
			x = atoi( sNo );
			y = atoi( tNo );
			z = y-x;
			cout << z << " + " << x << " = " << y << endl;
			
		} else if ( strchr( sNo, 'm') != NULL ){
			x = atoi( fNo );
			y = atoi( tNo );
			z = y-x;
			cout << x << " + " << z << " = " << y << endl;
		}else if( strchr( tNo, 'm') != NULL ){
			x = atoi( fNo );
			y = atoi( sNo );
			z = y+x;
			cout << x << " + " << y << " = " << z << endl;
		}
		
	}
	
	return 0;
}
