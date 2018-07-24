#include<bits/stdc++.h>
#include <bitset>
using namespace std;
char a[10][100001];//每个十六进制的数长度不超过100000
char B[400001]; //大数组在外面开
map<char,int> m;
int main()
{
    /*  for(int i=0;i<n;i++)//数据量太大，不能直接使用函数
    {
        scanf("%x",&t);
        printf("%o\n",t);

    }
    */
    for(int i=0;i<16;i++)    //将十六进制对应的数存入哈希表中
    {
        if(i<10)
        {
            m[48+i]=i;

        }

        else
        {
            m[65+i-10]=i;
        }

    }

    int n;
    cin>>n;
    int t;

    getchar();
    for(int i=0;i<n;i++)
    {
        gets(a[i]);
        int l=strlen(a[i]);

        int j;
        for(j=0;j<l;j++)//求每一个十六进制数的二进制数
        {

            int k=0;
            char ad=a[i][j];

            int a1=m[ad];
            int b=a1/2;

            char bit[4]={'0','0','0','0'};

            while(b!=0)
            {
                bit[k++]=a1%b+48;
                b=a1/2;


            }

            for(int ii=0;ii<4;ii++)//将bit字符数组中的二进制数倒序存入
            {
                B[4*j+ii]=bit[3-ii];

            }



        }

        cout<<B<<endl;

    }

    // bitset<1000000> binary(0x12);//先将十六进制转化为二进制
    char temp[3];//每三个数字计算一个

    return 0;
}
