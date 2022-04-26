#include<stdio.h>
int main()
{
    int n,m;
    while(scanf("%d%d",&m,&n)!=EOF)
    {
        long long int sum,r,rev=0,c=0;
        long long int result=pow(m,n);
        c=result;
        while(result!=0)
        {
            r=result%10;
            sum=sum*10+r;
            result/=10;

        }
            printf("result is = %lld\n",sum);

    }
    return 0;
}
