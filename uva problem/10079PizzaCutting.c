#include<stdio.h>
int main()
{
    long long int n;
    while(scanf("%lld",&n)!=EOF)
    {
        if(n<0)
        {
            break;
        }
        long long int i,sum=0;
        for(i=1;i<=n;i++)
        {
            sum=sum+i;
        }
        printf("%lld\n",sum+1);
    }
    return 0;
}
