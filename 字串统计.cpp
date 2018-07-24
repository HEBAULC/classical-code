#include<iostream>
#include<cstring> 
#include<string> 
#include<algorithm> 
using namespace std; 
char t[100],t2[100]; 
int main() 						//统计长度大于等于L的出现次数最多的子串（不同的出现可以相交） 
{ 
	string s; 					//如有多个输出最长的 
	int k,n,sum=0,h; 			//若仍有多个，输出第一次出现最早的 
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
			memcpy(t2,t,h); 		//内存拷贝函数  from t to t2 hKB
		} 
	} 
	for(int i=0;i<h;i++) 
		cout<<t2[i]; 
		
		cout<<endl; 
		return 0; 
}
