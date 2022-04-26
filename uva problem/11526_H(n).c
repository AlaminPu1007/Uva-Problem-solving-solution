#include<stdio.h>
long long result(int n)
{
    int i;
    long long sum=0;
    for(i=1;i<=n;i=i+1)
        {
            sum=(sum+(n/i));
        }
        return sum;
}
int main()
{
    int a;
    scanf("%d",&a);
    while(a--)
    {
        int t;
        scanf("%d",&t);
        printf("%lld\n",result(t));
    }
    return 0;
}
