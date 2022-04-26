///tried but not solved yet,,,,,
#include<stdio.h>
int main()
{
    int a,b;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        if(a==0&&b==0)
        {
            break;
        }
        int i,j,c[10],d[10],sum=0;

        for(i=0;i<a;i++)
        {
            scanf("%d",&c[i]);
        }
        for(j=0;j<b;j++)
        {
            scanf("%d",&d[j]);
        }
        for(i=0;i<a;i++)
        {
            if(c[i]==d[i])
            {
                sum++;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
