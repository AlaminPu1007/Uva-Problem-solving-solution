#include<stdio.h>
int main()
{
    int n,m;
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        int i,r=0,sum=0,copy=0,a[10],t=0,s=0,y=0;
        copy=n;
        while(n!=1)
        {
            n/=m;
            a[t]=n;
            t++;
            sum=n%m;
            if(sum==1)
            {
                s++;
            }
        }
        if(s>=2)
        {
            printf("Boring!");
        }
        else
        {
            printf("%d ",copy);
            for(i=0;i<t;i++)
            {
                printf("%d ",a[i]);
            }
        }
         printf("\n");
    }
    return 0;
}
