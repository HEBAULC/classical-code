#include <bits/stdc++.h>
using namespace std;
const int N=10000010;			//1e7+10素数表的长度
int p[N];				//存放所有素数，实际用不到那么多空间,他改成了直接用数组下标表示那个素数
bool np[N];				//对应数字是否是素数的标记，若p[i]为素数，则p[i]为false，否则p[i]为true
int main(){
  for(int i=2; i<N; i++) 
  {
	 if(not np[i])   		//等同于p[i]==flase 即p[i]是素数
	  {
	    p[i]=1;			//用下表表示直接置1即可，原版是p[pNum++]=i
	    for(int j=i; j<N; j+=i) 	//i+=j，表示的是i的倍数
		np[j]=true;		//判断完成后，将该数字的所有倍数删去，包括它本身
	  }
   } 
  

  for(int i=1; i<N; i++)       //原始p[0]=0,p[1]=0,p[2]=1,p[3]=1,p[4]=0,p[5]=1,p[6]=0
  p[i]+=p[i-1];                //加后p[0]=0,p[1]=0,p[2]=1,p[3]=2,p[4]=2,p[5]=3,p[6]=3,表示前n个数中素数的个数
  int n; cin>>n;
  long long ans=0;
  for(int i=1; i<=n; i++)
    ans+=(long long)p[n/i]*(p[n/i]-1);	//如果是偶数找其素因数，如果是奇数，找小于它的偶数的素因数
  cout<<ans<<endl;
}
