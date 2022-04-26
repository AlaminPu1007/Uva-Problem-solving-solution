#include<stdio.h>
int main()
{
    long n;
    while(scanf("%ld",&n)!=EOF)
    {
        if(n<0)
        {
            break;
        }
        else if(n==0)
        {
            printf("0");
        }
        long a[100],r=0,i;
        while(n!=0)
        {
            a[r]=n%3;
            n/=3;
            r++;
        }
        for(i=r-1;i>=0;i--)
        {
            printf("%ld",a[i]);
        }
        printf("\n");
    }
    return 0;
}
