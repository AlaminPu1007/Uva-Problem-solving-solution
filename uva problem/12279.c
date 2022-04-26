#include<stdio.h>
int main()
{
    int i,a[1000],count=0,count1=0,some=0,n;
    while(scanf("%d",&n)!=EOF)
    {
        some++;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
             if(a[i]>0)
        {
            count++;
        }
        else{
            count1++;
        }
        }
        printf("Case %d: %d\n",some,(count-count1));
    }
        return 0;
}
