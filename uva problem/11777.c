#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int a[10],i,max=0,max1=0,r=0,t,b,c,d,count=0;
        scanf("%d%d%d%d",&t,&b,&c,&d);
        count++;
        r=t+b+c+d;
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    for(i=0;i<3;i++)
    {
        if(a[i]>max1&&a[i]<max)
        {
            max1=a[i];
        }
    }
    r=r+((max+max1)/2);
    if(r>=90)
    {
        printf("Case %d: A\n",count);
    }
    else if(r>=80&&r<=90)
    {
        printf("Case %d: B\n",count);
    }
    else if(r>=70&&r<=80)
    {
        printf("Case %d: C\n",count);
    }
    else if(r>=60&&r<=70)
    {
        printf("Case %d: D\n",count);
    }
    else
    {
        printf("Case %d: F\n",count);
    }
    }
     return 0;
}
