#include<stdio.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);
    while(n--)
    {
        count++;
        int a,b,c,s=0;
        scanf("%d%d%d",&a,&b,&c);
        s=b+c;
        while(s>a)
        {
            s=s-a;
        }
        printf("Case %d: %d\n",count,s);
    }
    return 0;
}
