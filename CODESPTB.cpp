#include<iostream>

using namespace std;

unsigned long long int ans;

void merge( long long int a[], int left, int mid, int right ){
	int i = left, j = mid+1, k = 0;
	int temp[200006];
	
	while( i <= mid && j <= right ){
		if( a[i] <= a[j]){
			temp[k++] = a[i++];
		} else {
			ans = ans + mid -i+1;
			temp[k++ ] = a[j++];
		}
	}
	
	while( i <= mid ){
		temp[k++] = a[i++];
		
	}
	
	while( j <= right ){
		temp[k++ ] = a[j++];
	}
	
	for( i = 0; i < k; i++ ){
		a[left+i] = temp[i];
	}
}

void mergeSort( long long int a[], int left, int right ){
	int mid;
	
	if( left >= right ){
		return;
	} else {
		mid = ( left+right)/2;
		mergeSort( a, left, mid );
		mergeSort( a, mid+1, right );
		merge( a, left, mid, right );
	}
}

int main()
{
	long long int a[200006];
	long long int t, n, i;
	cin >>  t;
	
	
	while( t-- ){
		ans = 0;
	
		cin >> n;
		
		for( i = 0; i < n; i++ ){
			cin >> a[i];
		}
		
		mergeSort( a, 0, n-1 );
		cout << ans << endl;
	}
	
	return 0;
}
