#include<bits/stdc++.h>
using namespace std;
char s[2005][2005];
int a1,b1,a2,b2;
long long n,m;
int x,y;
int pandc()		//都是偶数 
{
	int flag=1;
	int i,j;

	for(i=0;i<n/2;i++)	//按行比较 
	{
		for(j=0;j<m;j++)
		{
			if(s[i][j]!=s[n-i-1][j])
			{
				flag=0;
				break;
			}
		}
	}
	
	if(flag==1)	//按列比较 
	{
		for(j=0;j<m/2;j++)
		{
			for(i=0;i<n;i++)
			{
				if(s[i][j]!=s[i][m-j-1])
				{
					flag=0;
					break;
				}
			}
		}
	}
		
	if(flag==1)		//中心对称 
		return 1;
	
	else
	{
		//扫描四条边
		if(s[0][0]!=s[n-1][m-1]||s[0][m-1]!=s[n-1][0])//四个角 
			return -1;
			
		else						//剩余四条边上的点 
		{
			//上边界和下边界 
			int	 F=1;
			for(j=1;j<m-1;j++)
			{
				if(s[0][j]!=s[n-1][j])
				{
					F=0;
					return -1;
					break;
				}
			 } 
			 
			 if(F==1)		//左右边界 
			 {
			 	for(i=1;i<n-1;i++)
			 	{
			 		if(s[i][0]!=s[i][m-1])
			 		{
			 			F=0;
			 			return -1;
			 			break;
					 }
				 }	 
			 } 	
		}
		
	 } 	 
	 return 0;
}
void paninside()
{
	//只循环花园左上角花园
	int	 F=0,i,j,k;
	for(i=1;i<n/2;i++)							//i=0
	{
		for(j=1;j<m/2;j++)					
		{	
			if(s[i][j]!=s[n-1-i][j]||s[i][j]!=s[i][m-1-j]||s[i][j]!=s[n-1-i][m-1-j])//s[n-1-i][j]
			{
				a1=i;
				b1=j;
				x=a1<x?a1:x;
				y=b1<y?b1:y;
			}
		}
					//必须两次才能跳出循环 if(F==1)break;
	} 
					 
}
void print()
{
	int i,j;
	for(i=0;i<n;i++)
	{
			printf("%s\n",s[i]);
	}
	
}
int main()
{
	int i,p,q,j,k;
	long long T;
	scanf("%lld",&T);
	
	for(i=0;i<T;i++)
	{
		x=3000,y=3000;
		fill(s[0],s[0]+4020025,'0');
		long long l,k;
		scanf("%lld%lld",&n,&m);	//行列数 
		//if(i==0)
		getchar();
		for(j=0;j<n;j++)
		{
			cin.getline(s[j],2005);
		}

		if(pandc()==-1)
		printf("0\n");
		
		else if(pandc()==1)
		{
			l=m/2-1;
			k=n/2-1;
			printf("%lld\n",l*k);
		}
		
		else
		{	
			paninside();
			printf("%lld\n",x*y);
		}
		
	}
}
