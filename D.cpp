#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    std::ios::sync_with_stdio(false);
    int T,Flag;//��û����Ʒ��״̬
    cin>>T;

    for(int i=0;i<T;i++)
    {
        Flag=0;
        long long tra=0,profit=0;
        long long n;
        cin>>n;
        long long a[n];

        for(int j=0;j<n;j++)
        {
            cin>>a[j];

        }

        for(int j=0;j<n-1;j++)
        {
            if(j==0)
            {
                if(Flag==0&&a[j+1]>a[j])       //=
                {
                    profit-=a[j];      //����
                    Flag=1;
                    //tra++;
                }

            }

        /*    else if(j==n-1&&Flag==1)
            {
                profit+=a[j];
                tra+=2;

            }*/

            else if(Flag==0&&a[j+1]>a[j])      //����a[j-1]>=a[j]&&=
            {
                    profit-=a[j];      //����
                    Flag=1;
                    //tra++;

            }


            else if(Flag==1&&a[j+1]<a[j])      //=
            {
                profit+=a[j];           //����
                Flag=0;
                tra+=2;

            }

        }

        if(Flag==1)     //���һ�������
        {
            profit+=a[n-1];
            tra+=2;

        }

        cout<<profit<<" "<<tra<<endl;
    }
}
