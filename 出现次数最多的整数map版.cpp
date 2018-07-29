#include<iostream>
#include<map>
using namespace std;
int main()
{
	int i,n,t,max=-1,k;
	map<int,int> mp;
	cin>>n;
	if(n<=0)
	return 0;
	

	for(i=0;i<n;i++)
	{
		cin>>t;
		if(mp.find(t)==mp.end())	//没存在过 
		{
			mp.insert(pair<int,int>(t,1)); 
			if(1>max)
			{
				max=1;
				k=t;
			 } 
		}
		
		else		//之前有过 
		{
			mp[t]++;
			if(mp[t]>max)
			{
				max=mp[t];
				k=t;
			}
		}
			
	 }
	 map<int,int>:: iterator it;
/*	 for(it=mp.begin();it!=mp.end();)
	 {
	 	cout<<it->first<<" "<<it->second<<endl ;
	 	it++;
	 }*/
	  
	 cout<<k<<endl;
	  
}
