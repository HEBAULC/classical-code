#include <bits/stdc++.h>
using namespace std;
const int N=10000010;		//��		1e7+10 �ķ�Χ 
bool p[N]={0};				//boolx������ɸѡ��ǣ�ֻռһ���ֽڣ���Ȼ�ڴ�ᱬ ,iΪ����p[i]Ϊfalse��ʾû�б�ɸ������true 
int prime[N],pNum=0;	//prime���������е�������pNumΪ�����ĸ��� 
void Find_Prime()
{
  for(int i=2; i<N; i++) //�ӵ�һ������2��ʼ,i<max����������= 
  {
	 if(p[i]==false)	//û��ɸȥ,˵�������� 
	  {
	    prime[pNum++]=i;
	    for(int j=i+i; j<N; j+=i) //ɸȥ����i�ı���,ע��߽粻��= ,j=iҲ���� 
			p[j]=true;
	  }
   } 
}
int main()
{
  	Find_Prime();
  	cout<<"1e7+10�ڹ���"<<pNum<<"������" <<endl;
  	int i=0;
  	for(i=0;i<100000;i++)
  	{
  		cout<<prime[i]<<" ";	
	}

  
}
