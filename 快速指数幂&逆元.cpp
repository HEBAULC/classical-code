#include<iostream>
#include<stdio.h>
#include<cmath>
#include<algorithm>
using namespace std;
typedef long long ll;
const ll mod=1000000007;
const ll N=1e5+7;
ll fac[N],inv[N],n;
ll qpow(ll a,ll b){
    ll ans=1;a%=mod;
    for(ll i=b;i;i>>=1,a=a*a%mod)
        if(i&1)ans=ans*a%mod;
    return ans;
}
int main()
{
    scanf("%lld",&n);
    ll ans=(n*(n-1)%mod*qpow(2,mod-2)%mod+n*(n-1)%mod*(n-2)%mod*(n-3)%mod*qpow(24,mod-2)+1-n+mod)%mod;
    printf("%lld\n",ans);
}
