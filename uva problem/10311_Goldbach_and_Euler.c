#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int i,a[100],flag=0,c=0,j;
        for(i=1;i<=n;i++)
        {
            for(j=2;j<=n;j++)
            {
                if(i%j==0)
                {
                    break;
                }
            }
            if(i==j)
            {
                a[c]=i;
                c++;
            }
        }
        for(i=0;i<c;i++)
        {
                if(a[i]+a[i+1]==n)
                {
                    printf("%d = %d + %d\n",n,a[i],a[i+1]);
                }
        }
    }
    return 0;
}
///printf("%d is the sum of %d and %d.\n",n,a[i],a[i+1]);
///printf("%d is not the sum of two primes!\n",n);
