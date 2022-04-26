#include<stdio.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);
    while(n--)
    {
        count++;
        int a,max=0,i,t;
        scanf("%d",&a);
        for(i=0;i<a;i++)
        {
            scanf("%d",&t);
            if(t>max)
            {
                max=t;
            }
        }
        printf("Case %d: %d\n",count,max);
    }
    return 0;
}
