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
		if(b&1)	r*=base; //����
		base*=base;
		b>>=1;			//����1λ 
	}	
	return r; 
} 
string dtob(ll n)		
{
	string s="";
	char c;
	int end; 
	while(n)		//��n��Ϊ0 
	{
		end=n&1;	//n%2
		c=end+'0';
		s=c+s;
		n>>=1;		//n=n/2
	}
	return s;
}
string strrev(string str)		//�ַ�����ת���� 
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
	//�Ӹ�λ����λ�� 
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
	//����18������ 
	//��������0-2��32�η���Χ�����ɶ����ƣ�Ȼ������������������У�ת����ʮ����
	ll n,ans;
	string t,s;
	while(cin>>n)
	{
		t=dtob(n);
		s=strrev(t);		//��ת�������ַ��� 
		ans=btol(s);
		cout<<ans<<endl;
	}	
}
