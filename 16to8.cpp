#include<bits/stdc++.h>
#include <bitset>
using namespace std;
char a[10][100001];//ÿ��ʮ�����Ƶ������Ȳ�����100000
char B[400001]; //�����������濪
map<char,int> m;
int main()
{
    /*  for(int i=0;i<n;i++)//������̫�󣬲���ֱ��ʹ�ú���
    {
        scanf("%x",&t);
        printf("%o\n",t);

    }
    */
    for(int i=0;i<16;i++)    //��ʮ�����ƶ�Ӧ���������ϣ����
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
        for(j=0;j<l;j++)//��ÿһ��ʮ���������Ķ�������
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

            for(int ii=0;ii<4;ii++)//��bit�ַ������еĶ��������������
            {
                B[4*j+ii]=bit[3-ii];

            }



        }

        cout<<B<<endl;

    }

    // bitset<1000000> binary(0x12);//�Ƚ�ʮ������ת��Ϊ������
    char temp[3];//ÿ�������ּ���һ��

    return 0;
}
