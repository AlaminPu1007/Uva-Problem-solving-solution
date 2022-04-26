///tried but not solved yet...
#include<stdio.h>
int main()
{
    int a,b;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        if(a==0&&b==0)
        {
            break;
        }
        int i,c[20],count=0;
        for(i=0;i<b;i++)
        {
            scanf("%d",&c[i]);
        }
        for(i=0;i<b;i++)
        {
            if(c[i]==a)
            {
                count=1;
            }
        }
        if(count=1)
        {
            printf("Y\n");
        }
        else
        {
            printf("N\n");
        }
    }
    return 0;
}
