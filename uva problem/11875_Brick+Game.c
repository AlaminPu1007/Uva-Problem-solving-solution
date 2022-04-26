#include<stdio.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);
    while(n--)
    {
        count++;
        int i,j,a[100],ans=0;
        scanf("%d",&j);
        for(i=0;i<j;i++)
        {
                scanf("%d",&a[i]);///it can  accepted without array,,,,
                if(i==j/2)
                {
                    ans=a[i];
                }
        }
        printf("Case %d: %d\n",count,ans);
    }
    return 0;
}
