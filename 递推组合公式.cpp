#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cmath>
#include<string>
#include<cstring>
#include<vector>
using namespace std;
#define ll long long
const int maxn = 2e3 + 10;
const ll mod = 1e9 + 7;
ll C[maxn][maxn];
void get_C() {     				//�������,�õ��ƹ�ʽǿ�д���ٶȿ��ڵݹ� 
	for (int i = 0; i <= 2e3; i++) {				//if 0<k<n Cn,k= Cn-1,k + Cn-1,k-1  
		C[i][0] = 1;								//els if k==0||k==n Cn,k=1
		for (int j = 1; j <= i; j++)
			C[i][j] = (C[i - 1][j] + C[i - 1][j - 1]) % mod;
	}
}
int main(){
	//�ŷ�����������Ƕ���ʽϵ�����������еļ������� 
	get_C();
	int n, m;
	while (~scanf("%d%d", &n, &m)) {
		printf("%d\n", C[n][m]);
	}
	return 0;
}

