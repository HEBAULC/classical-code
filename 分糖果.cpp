#include<iostream>
using namespace std;
int a[100];       //����ģ��С������һȦ
int pandeng(int n)
{
    int i,flag=0;
    for(i=0;i<n-1;i++)
    {
        if(a[i]!=a[i+1])
        {
            return 0;

        }

    }

    if(i==n-1)
        return 1;

}
int main()
{
    int i,n,sum=0;
    cin>>n;


    for(i=0;i<n;i++)
        cin>>a[i];

    int t[n];

    while(!pandeng(n))      //С���ѵ��ǹ��������ʱ��������Ϸ
    {
        for(i=0;i<n;i++)            //�ȴ�����ʱ������
        {
            if(i==n-1)
                t[i]=a[i]/2+a[0]/2;

            else
                t[i]=a[i]/2+a[i+1]/2;
        }

        //�ٸ�ԭ���鸳ֵ
        for(i=0;i<n;i++)
            a[i]=t[i];
            //cout<<t[i];


        //�����ǹ���һ��
        for(i=0;i<n;i++)
        {
            if(a[i]%2==1)
            {
                a[i]++;
                sum++;
            }
        }
    }

    cout<<sum;



}
