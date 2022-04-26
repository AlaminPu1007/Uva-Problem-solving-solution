#include<stdio.h>
int main()
{
    long int n;
    while(scanf("%ld",&n)!=EOF)
    {
        if(n==0)
        {
            break;
        }
        int count=0,i=0,a[20];
        while(n!=0)
        {
            a[i]=n%2;
            n/=2;
            i++;
        }
        printf("The parity of ");
        for(i=i-1;i>=0;i--)
        {
            printf("%d",a[i]);
            if(a[i]==1)
            {
                count++;
            }
        }
             printf(" is %d (mod 2).\n",count);
    }
    return 0;
}
