#include<iostream>
#include<bitset>
#include<string>
typedef long long ll;
using namespace std;
ll ksm(ll a,ll b)
{
	ll r=1,base=a;
	while(b)
	{
		if(b&1)	r*=base; //奇数
		base*=base;
		b>>=1;			//右移1位 
	}	
	return r; 
} 
string dtob(ll n)		
{
	string s="";
	char c;
	int end; 
	while(n)		//当n不为0 
	{
		end=n&1;	//n%2
		c=end+'0';
		s=c+s;
		n>>=1;		//n=n/2
	}
	return s;
}
string strrev(string str)		//字符串反转函数 
{
	string s="";
	int i,l=str.size();
	for(i=0;i<l;i++)
		s+=str[l-1-i];
		
	return s;
 } 
ll btol(string str)
{
	int l=str.size(),i,k;
	ll r=0;
	//从高位往低位算 
	for(i=0;i<l;i++)
	{
		k=str[i]-'0';
		if(k==0)
		continue;
		
		r+=ksm(2,l-1-i);
	} 	
		return r;
}
int main()
{	
	//北邮18机试题 
	//输入数据0-2的32次方范围，化成二进制，然后逆序这个二进制序列，转换成十进制
	ll n,ans;
	string t,s;
	while(cin>>n)
	{
		t=dtob(n);
		s=strrev(t);		//反转二进制字符串 
		ans=btol(s);
		cout<<ans<<endl;
	}	
}
