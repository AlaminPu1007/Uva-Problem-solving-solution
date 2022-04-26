#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
        {
            break;
        }
        int i,flag=0,count=0;
        long long int sum=0;
        for(i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            if(n==11||n==23||n==29)
            {
                printf("Given number is prime. But, NO perfect number is available.\n");
            }
            else
            {
                sum=pow(2,n-1)*(pow(2,n)-1);
                printf("Perfect: %lld!\n",sum);
            }
        }
        else
        {
            printf("Given number is NOT prime! NO perfect number is available.\n");
        }
    }
    return 0;
}
