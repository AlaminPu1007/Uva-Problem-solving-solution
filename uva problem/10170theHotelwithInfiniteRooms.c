#include<stdio.h>
int main()
{
    long long int a,b;
    while(scanf("%lld%lld",&a,&b)!=EOF)
    {
        long long int i,sum=0,count=0;
        for(i=a; ;i++)
        {
            sum=sum+i;
            if(sum>b||sum==b)
            {
                printf("%lld\n",i);
                break;
            }
        }
    }
    return 0;
}
