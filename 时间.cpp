#include<bits/stdc++.h>

 /* ━━━━━━神兽出没━━━━━━
 *       ┏┓　　　┏┓
 *     ┏ ┛┻ ━ ━ ━ ┛┻ ┓
 *     ┃　　　　   ┃
 *     ┃　　　━　  ┃
 *     ┃　┳┛　┗┳　  ┃
 *     ┃　　　　　 ┃
 *     ┃　　┻　　  ┃
 *     ┃　　　　　　
 *    ┗ ━ ┓    　┛      Code is far away from bug with the animal's protecting
 *         ┃　　　┃          神兽保佑,代码无bug
 *         ┃　　　┃
 *         ┃　　　┗━━━┓
 *         ┃　　　 　┣━┓
 *         ┃　　　　━┛
 *         ┗┓┓  ┏━┳┓┏┛
 *           ┃┫┫　┃┫┫
 *           ┗┻┛　┗┻┛
 *
 * ━━━━━━感觉骚骚哒━━━━━━
 */

using namespace std;
struct time{
    int h,m;

};
int main()
{
    struct time t[16];  //³õÊ¼»¯
    t[0].h=0,t[0].m=0;
    t[1].h=1,t[1].m=10;
    t[2].h=2,t[2].m=20;
    t[3].h=3,t[3].m=30;
    t[4].h=4,t[4].m=40;
    t[5].h=5,t[5].m=50;
    t[6].h=10,t[6].m=01;
    t[7].h=11,t[7].m=11;
    t[8].h=12,t[8].m=21;
    t[9].h=13,t[9].m=31;
    t[10].h=14,t[10].m=41;
    t[11].h=15,t[11].m=51;
    t[12].h=20,t[12].m=02;
    t[13].h=21,t[13].m=12;
    t[14].h=22,t[14].m=22;
    t[15].h=23,t[15].m=32;

    int h,m;
    scanf("%d:%d",&h,&m);
    int T=h*60+m,k;
    for(int i=0;i<16-1;i++)
    {
        if(h<23)
        {
            if(h==0&&m==0)
            {
                printf("23:32\n");
                printf("1:10\n");
                break;


            }

            else if(t[i].h*60+t[i].m==T)        //先判相等，有顺序问题
            {
                printf("%d:%d\n",t[i-1].h,t[i-1].m);
                printf("%d:%d\n",t[i+1].h,t[i+1].m);
                break;

            }

            else if(t[i].h*60+t[i].m<T&&t[i+1].h*60+t[i].m>T)
            {

                printf("%d:%d\n",t[i].h,t[i].m);
                printf("%d:%d\n",t[i+1].h,t[i+1].m);
                break;

            }

        }

        else if(h==23&&m==32)
        {
            printf("22:22\n");
            printf("0:0\n");
            break;
        }

        else
        {
            printf("22:22\n");
            printf("23:32\n");
            break;
        }


    }



}
