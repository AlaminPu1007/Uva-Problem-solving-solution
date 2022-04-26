#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
        {
            break;
        }
        int p[]={2,3,4,7,11,17,19,23,29,31};
        long long int i,count=0,sum=0;
        for(i=0;i<10;i++)
        {
            if(n==p[i])
            {
                count=1;
            }
        }
        if(count==1)
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
