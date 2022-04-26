#include<stdio.h>
int main()
{
    int n,k,q,a[100],b[10],j;
    while(scanf("%d%d",&n,&q)!=EOF)
    {
        int i;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(j=0;j<q;j++)
        {
            scanf("%d",&b[i]);
        }
        for(k=0;k<n;k++)
        {
            printf("%d\n",a[k]);
            if(b[i]==a[k])
            {
                printf("result is %d %d\n",k,a[k]);
            }
        }
    }
}
