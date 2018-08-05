#include<bits/stdc++.h>
using namespace std;
const int MAXN=1e5+10;
struct node{
    int a[15];
    int id;
};
 
int main(){
    int _;
    scanf("%d",&_);
    int zz=1;
    while(_--){ 
        queue<node >qu;
        int n;
        scanf("%d",&n);
        node x;
        for (int k = 1; k <=1<<n ; ++k) {
            for (int i = 0; i <n ; ++i) {
                scanf("%d,",&x.a[i]);
            }
            x.id=k;
            sort(x.a,x.a+n);
            qu.push(x);
        }
        node u,v;
        while (!qu.empty()){
            if(qu.size()==1)
                break;
            u=qu.front();
            qu.pop();
            v=qu.front();
            qu.pop();
            if(u.a[n-1]>v.a[n-1]){
                int k=upper_bound(u.a,u.a+n,v.a[n-1])-u.a;
                u.a[k]=0;
                sort(u.a,u.a+n);
                qu.push(u);
            }
            else{
                int k=upper_bound(v.a,v.a+n,u.a[n-1])-v.a;
                v.a[k]=0;
                sort(v.a,v.a+n);
                qu.push(v);
            }
        }
        v=qu.front();
        printf("Case #%d: %d\n",zz++,v.id);
    }
    return 0;
}

