#include<stdio.h>
int main()
{
    long long int a,b;
    char c;
    while(scanf("%lld %c %lld",&a,&c,&b)!=EOF)
    {
        if(c=='/')
        {
            printf("%lld\n",(a/b));
        }
        else if(c=='%')
        {
            printf("%lld\n",a%b);
        }
    }
    return 0;
}
