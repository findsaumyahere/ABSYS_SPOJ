#include<iostream>
using namespace std;
int main()
{
	int t;
	
	cin>>t;
	
	while(t>0){
	
		long int count=1, num;
		
		cin>>num;
		
		int i=1, j=1;
		
		while(count!=num){
			if(i==1){
				if(j%2!=0){	
					if(count<num){
						j++;
						count++;
					}
				
				} else {
					while(j!=1){
						if(count<num){
							i++;
							j--;
							count++;
						}
						else {
						
							break;
						}
					} 
				}
			}
			else if(j==1)
			{
				if(i%2==0)
				{
				
					if(count<num)
					{
						i++;
						count++;
					}
				
				
				}
				else
				{
				
					while(i!=1)
					{
					
						if(count<num)
						{
							i--;
							j++;
							count++;
						}
						else
						{
						
							break;
						}
					}
				
				}
			}
		}
		cout<<"TERM "<<num <<" IS " <<i<<"/"<<j<<"\n";
		
	}
	return 0;
}
