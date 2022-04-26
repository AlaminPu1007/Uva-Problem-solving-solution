#include<stdio.h>
int main()
{
    int n,count=0;
    while(scanf("%d",&n)!=EOF)
    {
        count++;
        if(n==0)
        {
            break;
        }
        printf("Case %d: %d\n",count,(n/2));
    }
    return 0;
}
