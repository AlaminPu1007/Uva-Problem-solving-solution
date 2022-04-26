#include<stdio.h>
int main()
{
   int a,b,c,n,count=0;
    scanf("%d",&n);
        while(n--)
        {
            count++;
            scanf("%d%d%d",&a,&b,&c);
            if(a>b&&b>c)
            {
                printf("Case %d: %d\n",count,b);
            }
            else if(a<b&&b<c)
            {
                printf("Case %d: %d\n",count,b);
            }
            else if(a>b&&a<c)
            {
                printf("Case %d: %d\n",count,a);
            }
            else if(a<b&&a>c)
            {
                printf("Case %d: %d\n",count,a);
            }
            else if(a<c&&c<b)
            {
                printf("Case %d: %d\n",count,c);
            }
            else if(a>c&&c>b)
            {
                printf("Case %d: %d\n",count,c);
            }
        }
    return 0;
}
