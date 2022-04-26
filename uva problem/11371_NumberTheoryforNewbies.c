#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int copy,r,sum=0,t=0,s=0;
        copy=n;
        while(n!=0)
        {
            r=n%10;
            sum=sum*10+r;
            n/=10;
        }
        t=sum-copy;
        s=t/9;
        printf("%d - %d = %d = 9 *%d\n",sum,copy,t,s);
    }
    return 0;
}
