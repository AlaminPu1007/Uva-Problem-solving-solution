#include<stdio.h>
int main()
{
    int n,m,a[100],sum=0,i;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        scanf("%d",&m);
        for(i=0;i<n;i++)
        {
            if(a[i]+a[i]==m)
            {
                printf("Peter should buy books whose prices are %d and %d.\n",a[i],a[i]);
            }
        }
    }
}
