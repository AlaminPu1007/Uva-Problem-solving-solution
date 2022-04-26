#include<stdio.h>
int main()
{
    long long int n;
    while(scanf("%lld",&n)!=EOF)
    {
        if(n==0)
        {
            break;
        }
        long long int r;
        r=sqrt(n);
        if((r*r)==n)
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }
    }
    return 0;
}
