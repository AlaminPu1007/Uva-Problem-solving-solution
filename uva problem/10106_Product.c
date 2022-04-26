#include<stdio.h>
int main()
{
    int a,b;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        char c[200],t=0;
        c[t]=a*b;
        printf("%s\n",c[t]);
    }
    return 0;
}
