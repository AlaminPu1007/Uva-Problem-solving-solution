#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        long long int a,b,sum=0,s=0,t=0;
        scanf("%lld%lld",&a,&b);
        sum=a+b;
        sum=sum/2;
        s=a-b;
        t=s/2;
        if(s<0)
        {
            printf("impossible\n");
        }
        else
        {
            printf("%lld %lld\n",sum,t);
        }
    }
    return 0;
}
