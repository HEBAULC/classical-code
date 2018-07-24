#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,a[100005],m,dp[100005];
ll ans,flage;
int main()
{
	cin>>n;
	while(n--)
	{
		memset(a,0,sizeof(a));
		memset(dp,0,sizeof(dp));
		cin>>m;
		flage=0;ans=0;
		ll sum=0;
		cin>>a[1];
		ll temp=a[1];
		ll min=a[1];
		ll i;
		for(i=2;i<=m;i++)
		{
			cin>>a[i];
			if(temp>a[i])
			{
				sum=temp-min;
				if(sum>0)
				{
					ans+=sum;flage+=2;
				}
				temp=a[i];
				min=temp;
			}
			else
			temp=a[i];
		 }
		 if(temp>a[i])
			{
				sum=temp-min;
				if(sum>0)
				{
					ans+=sum;flage+=2;
				}
				temp=a[i];
				min=temp;
			}
		 cout<<ans<<" "<<flage<<endl;

	}
}
