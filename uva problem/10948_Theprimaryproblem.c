#include<stdio.h>
int main()
{
    long long int n;
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
        {
            break;
        }
        long long int i,j,flag,sum=0,count,l;
        for(i=2;i<=n/2;i++)
        {
            flag=0;
            for(j=2;j<=sqrt(i);j++)
            {
                if(i%j==0)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                l=n-i,count=0;
                for(j=2;j<=sqrt(l);j++)
                {
                    if(l%j==0)
                    {
                        count=1;
                        break;
                    }
                }
                if(count==0)
                {
                    sum=1;
                    break;
                }
            }
        }
        printf("%lld:\n",n);
        if(sum==1)
        {
            printf("%lld+%lld\n",i,l);
        }
        else
        {
            printf("NO WAY!\n");
        }
    }
    return 0;
}
