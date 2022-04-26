#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    while(a--)
    {
        int n,b,c,d,e,f,g=0;
        scanf("%d",&n);
        b=n*567;
        c=b/9;
        d=c+7492;
        e=d*235;
        f=e/47;
        g=f-498;
        int i,r,reverse=0;
        for(i=0;i<2;i++)
        {
            r=g%10;
            reverse=reverse*10+r;
            g/=10;
        }
        int r1,reverse1=0;
        for(i=0;i<1;i++)
        {
            r1=reverse%10;
            reverse1=reverse1*10+r1;
            reverse/=10;
        }
            if(reverse1<0)
            {
                printf("%d\n",(-1)*reverse1);
            }
            else
            {
                printf("%d\n",reverse1);
            }
    }
    return 0;
}
