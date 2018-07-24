#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int i,n,t;
	cin>>n;
	if(n>0)
	{
			int a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];		//存储输入的数据 
		}
		
		int k=0;
		int  b[1000][2];
		b[0][0]=a[0];
		b[0][1]=0;
		
		for(i=1;i<n;i++)		//找不同的数字 
		{
			if(a[i]!=b[k][0])
			{
				b[++k][0]=a[i];
				b[k][1]=0;
			}
			
		}
		//cout<<k+1<<endl; 
		
	
		for(i=0;i<=k;i++)		//统计出现的次数 
		{
			for(int j=0;j<n;j++)
			{
				if(a[j]==b[i][0])
				{
					b[i][1]++;
				}
			}	
		}
		
	/*	for(i=0;i<n;i++)		//显示不同的数字 
		{
			if(a[i]!=b[k][0])
			{
				cout<<b[i][0]<<" "<<b[i][1]<<endl;
			}
			
		}*/
		
		
		//找最多的次数
		int max=-1;
		for(i=0;i<=k;i++)
		{
			if(b[i][1]>max)
			max=b[i][1];
			
		}
		
		for(i=0;i<=k;i++)
		{
			if(b[i][1]==max)
			{
				cout<<b[i][0]<<endl;
				break;
			}
			
			
		}
		
		
	}
	
	
	
}
