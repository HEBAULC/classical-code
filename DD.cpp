#include<iostream>
#define Max 1000000
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
typedef long long ll;
int n;
ll a[Max];
ll flag[Max];
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        //fill(flag,flag+sizeof(flag),0);
        memset(flag,0,sizeof(flag));
        cin>>n;
        ll temp;
        int cnt;
        for(int i=0;i<n;++i)
        {
            scanf("%llf",&temp);
            if(i==0) a[cnt++]=temp;
            else if(temp!=a[cnt-1]) a[cnt++]=temp;

        }
        n=cnt;

        ll ans=0;
        for(int i=1;i<n;++i){
            if(a[i-1]<=a[i]){
                flag[i]++;
                flag[i-1]--;
            }
        }

        int trans =0,l=0;
        for(int i=0;i<n;++i){
            if(flag[i]!=0){
                trans++;
            }
            if(flag[i]==-1){
                l=a[i];
            }
            if(flag[i]==1){
                ans+=(a[i]-(ll)l);
            }
        }

        if(ans==0) trans=0;
        printf("%lld %d\n",ans,trans);


    }
        return 0;

}
