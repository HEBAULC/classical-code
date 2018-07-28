#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
	std::ios::sync_with_stdio(false);
    int t;
    cin>>t;
    int c[]={10000,5000,2000,1000,500,200,100,50,20,10,5,2,1};
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int ans[200]={0};
        a = b+a*100;
        for(int i=0;i<=12;i++)
        {
            while(a>=c[i])
            {
                ans[i]++;
                a-=c[i];
            }
        }
        int top = 1;
 
        for(int i=0;i<=12;i++)
        {
            if(top)top =0 ;
            else printf(" ");
            printf("%d",ans[i]);
        }
        puts("");
    }
    //return 0;
}
 
