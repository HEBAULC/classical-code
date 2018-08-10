#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=3e5+10;
map<string, int>dp[20];
map<string, int>::iterator it;
 
int main(){
    std::ios::sync_with_stdio(false);
    string s, s0, s1, s2, s3;
    int n;
    cin>>n>>s;
    dp[n][s]=1;
    for(int i=n; i>=1; i--){			//字符串长度为2^i的map数组,长度从高到低递推 
        for(it=dp[i].begin(); it!=dp[i].end(); it++){
            s0=it->first;
            s1=s2=s3="";
            for(int j=0;j<1<<i;j+=2){
                s1+=((s0[j]-'0')&(s0[j+1]-'0'))+'0';
                s2+=((s0[j]-'0')|(s0[j+1]-'0'))+'0';
                s3+=((s0[j]-'0')^(s0[j+1]-'0'))+'0';
            }
            dp[i-1][s1]+=it->second;
            dp[i-1][s2]+=it->second;
            dp[i-1][s3]+=it->second;
        }
    }
    s0="1";
    printf("%d\n", dp[0][s0]);
 
    return 0;
}
