#include<iostream>
using namespace std;
int a[100];       //数组模拟小朋友坐一圈
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

    while(!pandeng(n))      //小朋友的糖果数不相等时，继续游戏
    {
        for(i=0;i<n;i++)            //先存入临时数组中
        {
            if(i==n-1)
                t[i]=a[i]/2+a[0]/2;

            else
                t[i]=a[i]/2+a[i+1]/2;
        }

        //再给原数组赋值
        for(i=0;i<n;i++)
            a[i]=t[i];
            //cout<<t[i];


        //奇数糖果补一个
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
