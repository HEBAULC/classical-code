#include<bits/stdc++.h>
using namespace std;
char s[263000];
int judgeS(queue<int> s)
{
	if(s.size()==1&&s.front()==1)
		return 1;
		
		
	else if(s.size()==1&&s.front()==0)
		return 0;

		
		
	else
	{
		
		int i,l=s.size(),a,b;
		//3ÖÖÇé¿ö 
		queue<int> tem1,tem2,tem3;
		for(i=0;i<l/2;i++)
		{
			a=s.front();
			s.pop();
			b=s.front();
			s.pop();
			
			tem1.push(a&b);
			tem2.push(a|b);
			tem3.push(a^b);
		}
		
	/*	cout<<tem1<<endl;
		cout<<tem2<<endl;
		cout<<tem3<<endl;*/

		return judgeS(tem1)+judgeS(tem2)+judgeS(tem3);
		
	}
}
int main()
{
	
	queue<int> que;
	int n,ans,l;
	register int i;
	scanf("%d",&n);
	scanf("%s",s);
	
	l=pow(2,n);
	for(i=0;i<l;i++)
	que.push(s[i]-'0');
		
	ans=judgeS(que);
	cout<<ans<<endl;
		
/*		for(i=0;i<l;i++)
		que.pop();	*/
	
	
 } 
