///can't solution this program :D
#include<stdio.h>
int main()
{
    int a,n;
    scanf("%d",&a);
    while(a--)
    {
        int r,sum=0;
        scanf("%d",&n);
        while(n!=0)
        {
            r=n%3;
            r=r+1;
            sum=sum*10+r;
            n/=3;
            printf("%d\n",n);
        }
        printf("R=%d sum=%d",r,sum);
    }
}
