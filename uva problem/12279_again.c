#include<stdio.h>
int main()
{
    int n,i,count=0;
    while(scanf("%d",&n),n)
    {   count++;
        int some=0,thing=0,a;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a);
            if(a>0)
            {
                some++;
            }
            else
            {
                thing++;
            }
        }
        printf("Case %d: %d\n",count,(some-thing));
    }
    return 0;
}
