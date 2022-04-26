#include<stdio.h>
int main()
{
    long long int a,b,c;
    while(scanf("%lld%lld%lld",&a,&b,&c)!=EOF)
    {
        if(a==0&&b==0&&c==0)
        {
            break;
        }
        if(a*a + b*b == c*c)
        {
            printf("right\n");
        }
        else if(b*b+c*c==a*a)
        {
            printf("right\n");
        }
        else if(c*c+a*a==b*b)
        {
            printf("right\n");
        }
        else
        {
            printf("wrong\n");
        }
    }
    return 0;
}
