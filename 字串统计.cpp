#include<iostream>
#include<cstring> 
#include<string> 
#include<algorithm> 
using namespace std; 
char t[100],t2[100]; 
int main() 						//ͳ�Ƴ��ȴ��ڵ���L�ĳ��ִ��������Ӵ�����ͬ�ĳ��ֿ����ཻ�� 
{ 
	string s; 					//���ж�������� 
	int k,n,sum=0,h; 			//�����ж���������һ�γ�������� 
	cin>>k>>s; 
	n=s.length(); 
	for(int i=k;i<=n;i++) 
	{ 
		int pos=0; 
		while(pos!=n-i) 
		{ 
			int count=0,p=0; h=0; 
			for(int j=pos;j<i+pos&&j<n;j++) 
				t[h++]=s[j]; 
				
			pos++; 	
			//s from p search char[]t content 
			while((p=s.find(t,p))!=string::npos) 	//test if search fail
			{ 										//not fail return string::npos note seccess
				p++; 
				count++; 
			} 
			
			if(sum<count) 
			{ 
				memcpy(t2,t,h); 
				sum=count; 
			} 
			if(sum==count) 
			
			if(strlen(t2)<h) 
			memcpy(t2,t,h); 		//�ڴ濽������  from t to t2 hKB
		} 
	} 
	for(int i=0;i<h;i++) 
		cout<<t2[i]; 
		
		cout<<endl; 
		return 0; 
}
