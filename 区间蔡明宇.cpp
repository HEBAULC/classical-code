/*
 * ━━━━━━神兽出没━━━━━━
 * 　　　┏┓　　　┏┓
 * 　　┏┛┻━━━┛┻┓
 * 　　┃　　　　　　　┃
 * 　　┃　　　━　　　┃
 * 　　┃　┳┛　┗┳　┃
 * 　　┃　　　　　　　┃
 * 　　┃　　　┻　　　┃
 * 　　┃　　　　　　　┃
 * 　　┗━┓　　　┏━┛      Code is far away from bug with the animal's protecting
 * 　　　　┃　　　┃          神兽保佑,代码无bug
 * 　　　　┃　　　┃
 * 　　　　┃　　　┗━━━┓
 * 　　　　┃　　　　　　　┣━┓
 * 　　　　┃　　　　　　　┏━┛
 * 　　　　┗┓┓┏━┳┓┏┛
 * 　　　　　┃┫┫　┃┫┫
 * 　　　　　┗┻┛　┗┻┛
 *
 * ━━━━━━感觉骚骚哒━━━━━━
 */
#include<bits/stdc++.h>
using namespace std;
const int maxn = 1e6+5;
long long c[maxn] = {0}, n, m;
int lowbit(int t)
{
    return t&(-t);
}
void add(int k, int t)
{
    while(k <= n)
    {
        c[k] += t;
        k += lowbit(k);
    }
}
int sum(int k)
{
    int ans = 0;
    while(k > 0)
    {
        ans += c[k];
        k -= lowbit(k);
    }
    return ans;
}
int main()
{
    int x, l, r, tmp;
    scanf("%lld%lld", &n, &m);
    for(int i = 1;i <= n;i ++)
    {
        scanf("%d", &x);
        add(i, x);
        add(i + 1, -x);
    }
    while(m --)
    {
        scanf("%d%d%d%d", &tmp, &l, &r, &x);
        if(tmp == 1)
            x = -x;
        add(l, x);
        add(r + 1, -x);
 
    }
    long long s = 0;
    scanf("%d%d", &l, &r);
    for(int i = l;i <= r;i ++)
    	s += sum(i);
    cout << s << endl;
    return 0;
}

