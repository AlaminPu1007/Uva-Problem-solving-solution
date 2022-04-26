/*
#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int i,a[100],c;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        printf("Enter your need value\n");
        scanf("%d",&c);
        for(i=0;i<n;i++)
        {
                if(a[i]+a[i+1]==c)
                {
                    printf("Peter should buy books whose prices are %d and %d.\n",a[i],a[i+1]);
                }
        }
    }
    return 0;
}
*/
#include <stdio.h>

int main()
{
    int i,j,a[100],b[100],c=0,count=0,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a[c]=i;
        c++;
    }
    for(i=0;i<c;i++)
    {
        for(j=1;j<c;j++)
        {
            b[count]=a[i]%a[j]!=0;
            count++;
            if(a[i]+a[j]==(a[count]))
            {
                printf("%d\t",a[i]);
            }
        }
    }

    return 0;
}



