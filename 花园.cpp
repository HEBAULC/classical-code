#include<bits/stdc++.h>
using namespace std;
char s[2005][2005];
int a1,b1,a2,b2;
long long n,m;
int x,y;
int pandc()		//����ż�� 
{
	int flag=1;
	int i,j;

	for(i=0;i<n/2;i++)	//���бȽ� 
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
	
	if(flag==1)	//���бȽ� 
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
		
	if(flag==1)		//���ĶԳ� 
		return 1;
	
	else
	{
		//ɨ��������
		if(s[0][0]!=s[n-1][m-1]||s[0][m-1]!=s[n-1][0])//�ĸ��� 
			return -1;
			
		else						//ʣ���������ϵĵ� 
		{
			//�ϱ߽���±߽� 
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
			 
			 if(F==1)		//���ұ߽� 
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
	//��԰�ϱߺ��±� 
	int	 F=1,i,j,k;
	
	for(i=0;i<n/2;i++)
	{
		for(j=1;j<m-1;j++)
		{	
			if(s[i][j]!=s[n-1-i][j])
			{
				a1=i;
				b1=j;
				break;
			}
		}
	} 
	
	for(j=0;j<m/2;j++)
	{
		for(i=1;i<n-1;i++)	//���ұ߽�
		{
			if(s[i][j]!=s[i][m-1-j])		//&&i!=k
			{
				a2=i;
				b2=j;
				x=a1<a2?a1:a2;
				y=b1<b2?b1:b2;

				break;
			}
		}
		
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
		x=0,y=0;
		fill(s[0],s[0]+4020025,'0');
		long long l,k;
		scanf("%lld%lld",&n,&m);	//������ 
		//if(i==0)
		getchar();
		for(j=0;j<n;j++)
		{
			cin.getline(s[j],2005);
		}
		//print();
		//printf("%d\n",pandc());
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
			if(m==n)
			{
				if(a1==b2&&a2==b1&&x==m/2-1)
				{
					printf("%lld\n",(x-1)*(y-1));
				}
			}
			
			else
				printf("%lld\n",x*y);
			//printf("%d %d\n",a,b);//l=(m-1)/2-b;//k=(n-1)/2-a;	
					
		}
		
	}
}
