#include<iostream>

using namespace std;

int main()
{
	int firstNo, secondNo, thirdNo;
	double difference, ratio;
	cin >> firstNo >> secondNo >> thirdNo;
	while( (firstNo == 0 && secondNo == 0 && thirdNo == 0) !=1 ){
	
		if ( thirdNo-secondNo == secondNo-firstNo ){
			difference = thirdNo-secondNo;
			cout << "AP " << thirdNo+difference << endl;
		}
		else if ( thirdNo/secondNo == secondNo/firstNo ){
			ratio = thirdNo/secondNo;
			cout << "GP " << thirdNo*ratio << endl;
		}
		
		
		cin >> firstNo >> secondNo >> thirdNo;
	
	}
	
	return 0;
}
