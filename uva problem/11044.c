#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b;
        scanf("%d%d",&a,&b);
            printf("%d\n",(a/3)*(b/3));
    }
    return 0;
}
