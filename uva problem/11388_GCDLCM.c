#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    while(a--)
    {
        int n,m;
        scanf("%d%d",&n,&m);
        if(m%n==0)
        {
            printf("%d %d\n",n,m);
        }
        else
        {
            printf("-1\n");
        }
    }
    return 0;
}
