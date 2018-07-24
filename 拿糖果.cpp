#include<iostream>
#include<math.h>
using namespace std;
int pansu(int n)
{
    int i,flag=0;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;

        }

    }

    if(i==n)
        return 1;

    else if(flag==0)
        return 0;

}
int main()
{
    int sum=0,n,i;
    cin>>n;

    float k;
    k=sqrt(n);
    int t=k;  //½Ø¶ÏÈ¡Õû

    while(t>=2)
    {
        int m;
        for(i=t;i>=2;i--)
        {
            if(pansu(i))
            {
                m=i;
                break;

            }

        }

        sum+=m;
        n-=2*m;

        k=sqrt(n);
        t=k;

    }

    cout<<sum;

}
