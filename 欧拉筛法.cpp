#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=1e7+5;
int n;
ll ans;
bool isPrime[maxn];
int prime[maxn/10],cnt;
void screen()//欧拉筛法求素数
{
    cnt=0;
    memset(isPrime,1,sizeof(isPrime));
    isPrime[0]=isPrime[1]=0;
    for(int i=2;i<=n;i++)
    {
        if(isPrime[i])
        {
            prime[cnt++]=i;
            ans+=2*(n/i)*(cnt-1);
            //每找到一个素数i，其就可以与前面所有出现过的cnt-1个素数组成cnt-1个素数对，
			//相应的就有2*(n/i)*(cnt-1)个数对
        }
        for(int j=0;j<cnt;j++)
        {
            if(i*prime[j]>n) break;
            isPrime[(i*prime[j])]=0;
            if(i%prime[j]==0) break;
        }
    }
}

int main()
{
    scanf("%d",&n);
    ans=0;
    screen();
    cout<<ans<<endl;
}

