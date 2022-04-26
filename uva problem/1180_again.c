#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int  p;
        scanf("%d",&p);
        if(p==2||p==3||p==5||p==7||p==13||p==17)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}
