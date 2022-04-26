#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
        {
            break;
        }
        int copy=0,sum=0;
        while(n>=3)
        {
            copy=n/3;
            sum=sum+copy;
            n=(n/3)+(n%3);
        }
        if(n==2)
        {
            sum++;
        }
        printf("%d\n",sum);
    }
    return 0;
}
