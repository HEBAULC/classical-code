#include<iostream>
using namespace std;
int main()
{
	int i,j,n;
	cin>>n;
	char s[2*n-1][2*n-1];
	
	fill(s[0],s[0]+(2*n-1)*(2*n-1),'.');
	
	int mid=(2*n-1)/2;
	for(i=0;i<2*n-1;i++)		//为中间竖列赋值 
	{
		if(i<=mid)
		s[i][mid]=65+i;
		
		else
		s[i][mid]=65+(2*n-2-i);
	 } 
	 
	 for(i=0;i<2*n-1;i++)		//为中间横排赋值 
	{
		if(i<=mid)
		s[mid][i]=65+i;
		
		else
		s[mid][i]=65+(2*n-2-i);
	 } 
	 
	 
	 for(i=0;i<2*n-1;i++)
	{
		for(j=0;j<2*n-1;j++)
		{
			if(i==j)
			{
				s[i][j]=s[i][mid];
				s[i][2*n-2-j]=s[i][mid];
				break;
			}
		}
	 } 
		
	for(i=0;i<2*n-1;i++)//显示米字形 
	{
		for(j=0;j<2*n-1;j++)
		{
			if(j==2*n-2)
			cout<<s[i][j]<<endl;
			
			else
			cout<<s[i][j];
		}
	 } 
}
