///tried but not solved yet,,,...27-4-18(10:46pm)
#include<stdio.h>
int main()
{
    long long int n;
    while(scanf("%lld",&n)!=EOF)
    {
        long long int i,fact=1;
        for(i=1;i<=n;i++)
        {
            fact*=i;
        }
        printf("%lld",fact);
        if(fact>6227020800)
        {
            printf("Overflow!\n");
        }
        else if(fact<10000)
        {
            printf("Underflow!\n");
        }
        else
        {
            printf("%lld\n",fact);
        }
    }
    return 0;
}
