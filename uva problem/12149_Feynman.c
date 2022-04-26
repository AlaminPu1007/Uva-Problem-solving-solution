#include <stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
        {
            break;
        }
        int i,r=0,sum=0;
        for(i=1;i<=n;i++)
        {
            r=(i*i);
            sum=sum+r;
        }
            printf("%d\n",sum);
    }
    return 0;
}


