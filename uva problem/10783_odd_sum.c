#include<stdio.h>
int main()
{
    int count=0,i,n;
    scanf("%d",&n);
    while(n--)
    {
        count++;
        int a,b,i,sum=0;
        scanf("%d%d",&a,&b);
        int s=a+b;
        for(i=a;i<=b;i++)
        {
            if(i%2!=0)
            {
                sum+=i;
            }
        }
        printf("Case %d: %d\n",count,sum);
    }
    return 0;
}
