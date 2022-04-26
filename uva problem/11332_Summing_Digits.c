#include<stdio.h>
int main()
{
    int a;
    while(scanf("%d",&a)!=EOF)
    {
        if(a==0)
        {
            break;
        }
        int r,sum=0;
        while(a!=0)
        {
            r=a%10;
            sum+=r;
            a/=10;
        }
        int r1,sum1=0;
        while(sum!=0)
        {
            r1=sum%10;
            sum1+=r1;
            sum/=10;
        }
        int r2,sum2=0;
        while(sum1!=0)
        {
            r2=sum1%10;
            sum2+=r2;
            sum1/=10;
        }
        printf("%d\n",sum2);
    }
    return 0;
}
