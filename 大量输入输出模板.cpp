#include<iostream>
using namespace std;
typedef long long LL; 
const int INF=2147483647;			//32λ�з�������� ���ͳ��� 
// �����ݴ�����������ܽ� 
LL getint()
{
    LL res=0,p=1;
    char ch=getchar();
    while ((ch<'0'||ch>'9') && ch!='-') ch = getchar();
    if (ch=='-') p=-1,ch=getchar();
    while (ch>='0'&&ch<='9') res=res*10+ch-'0',ch=getchar();
    return res*p;
}
void printf_(int num)
{
    if(num < 0) {
        putchar('-');
        num = -num;
    }
    int ans[10], top = 0;				//���εĻ����40������10λ�͹� 
    while(num != 0) {
        ans[top++] = num % 10;
        num /= 10;
    }
    if(top == 0) putchar('0');
    for(int i = top-1; i >= 0; i--) {
        char ch = ans[i] + '0';
        putchar(ch);
    }
}
int main()
{
	int T=getint();
	printf_(T); 
 } 
