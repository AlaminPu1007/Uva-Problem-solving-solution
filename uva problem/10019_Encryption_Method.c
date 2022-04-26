#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    while(a--)
    {
        int n,r[100],j,i=0,sum=0,count=0;
        scanf("%d",&n);
        while(n>0)
        {
            r[i]=n%2;
            n/=2;
            i++;
        }
        for(j=i-1;j>=n;j--)
        {
            if(r[j]==1)
            {
                count++;
            }
        }
        printf("%d ",count);
    }
}
