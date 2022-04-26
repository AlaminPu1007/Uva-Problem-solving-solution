#include<stdio.h>
int main()
{
     int n;
    scanf("%d",&n);
    while(n--)
    {
        long long int y,x=0;
        scanf("%lld",&y);
        x=sqrt(y);
        printf("%lld\n",x);
    }
    return 0;
}
