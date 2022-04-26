///not solved yet try again later.
#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    while(a--)
    {
        int a,b,s=0,r,r1,n=0,t=0;
        scanf("%d%d",&a,&b);
        int count=0;
        if(a==0&&b==0)
        {
            break;
        }
        s=a+b;
        while(a!=0&&b!=0)
        {
            r=a%10;
            r1=b%10;
            n=r+r1;
            t=n%10;
            if(t==1)
            {
                count++;
            }
            a/=10;
            b/=10;

        }
        if(count==0)
        {
            printf("No carry operation.\n");
        }
        else
        {
            printf("%d carry operation.\n",count);
        }
    }
    return 0;
}

