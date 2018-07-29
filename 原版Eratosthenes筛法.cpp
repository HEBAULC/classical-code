#include <bits/stdc++.h>
using namespace std;
const int N=10000010;		//表长		1e7+10 的范围 
bool p[N]={0};				//boolx数组做筛选标记，只占一个字节，不然内存会爆 ,i为素数p[i]为false表示没有被筛，否则true 
int prime[N],pNum=0;	//prime数组存放所有的素数，pNum为素数的个数 
void Find_Prime()
{
  for(int i=2; i<N; i++) //从第一个素数2开始,i<max结束，不能= 
  {
	 if(p[i]==false)	//没有筛去,说明是素数 
	  {
	    prime[pNum++]=i;
	    for(int j=i+i; j<N; j+=i) //筛去所有i的倍数,注意边界不能= ,j=i也可以 
			p[j]=true;
	  }
   } 
}
int main()
{
  	Find_Prime();
  	cout<<"1e7+10内共有"<<pNum<<"个素数" <<endl;
  	int i=0;
  	for(i=0;i<100000;i++)
  	{
  		cout<<prime[i]<<" ";	
	}

  
}
