#include<iostream>
#include<math.h>
using namespace std; 
void mi(int n)
{
	if(n==1)
	cout<<"2(0)";
	
	else if(n==2)
	cout<<"2";
	
	else
	{
		int high=log(n)/log(2);
		
		if(pow(2,high)==n)		//刚好能表示 没有加好 
		{
			cout<<"2(";
			mi(high);
			cout<<")";
			
		}
		
		else
		{
				if(high==1)
				{
					mi(2);
					cout<<"+";
					n-=pow(2,high);
					mi(n);
				}
				
				else
				{
					cout<<"2(";
					mi(high);
					cout<<")+";
					
					n-=pow(2,high);
					mi(n);
				}
				
				
				
			
		}	
	}
}
int main()
{
	int n;
	cin>>n;
	mi(n);
 } 
