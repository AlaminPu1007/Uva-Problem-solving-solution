#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        long long int sum=1,copy=0;
        int a,i,count=0;
        scanf("%d",&a);
        for(i=1;i<=a;i++)
        {
            sum=sum*i;
        }
        copy=sum;
        while(copy!=0)
        {
            copy/=10;
            count++;
        }
        printf("%d\n",count);
    }
    return 0;
}
