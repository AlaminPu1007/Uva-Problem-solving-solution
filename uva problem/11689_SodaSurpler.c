#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int a,b,c,sum=0,n,p=0,q=0;
        scanf("%d%d%d",&a,&b,&c);
        n=a+b;
        while(n!=1)
        {
            p=n%c;
            q=n/c;
            sum=sum+q;
            n=p+q;
        }
        printf("%d\n",sum);
    }
    return 0;
}
