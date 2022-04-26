#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int t;
        scanf("%d",&t);
        while(t--)
        {
            int a,b,c;
            scanf("%d%d%d",&a,&b,&c);
            if(a>b&&a>c)
            {
                if((b+c)<a)
                {
                    printf("%d %d\n",(b+c),a);
                }
                else
                    {
                        printf("%d %d\n",a,(b+c));
                    }

            }
            else if(b>a&&b>c)
            {
                if((a+c)<b)
                {
                    printf("%d %d\n",(a+c),b);
                }
                else
                    {
                        printf("%d %d\n",(a+c),b);
                    }
            }
            else if(c>a&&c>b)
            {
                if((a+b)<c)
                {
                    printf("%d %d\n",(a+b),c);
                }
                else
                    {
                        printf("%d %d\n",c,(a+b));
                    }
            }
        }
    }
    return 0;
}
