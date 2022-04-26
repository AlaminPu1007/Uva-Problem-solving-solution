#include<stdio.h>
#include<algorithm>
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
        {
            break;
        }
        int i,sum=0,a[20];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        sort(a,a+i);
        for(i=0;i,n;i++)
        {
            printf("%d",a[i]);
            if(i<n-1)
            {
                printf(" ");
            }
        }
    }
    return 0;
}
