#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int a,b,c,d;
        scanf("%d%d%d%d",&a,&b,&c,&d);
        if(a==b && b==c && c==d)
        {
            printf("square\n");
        }
        else if( (a==b && c==d) || (b==c && d==a) || (a==c&& b==d))
        {
            printf("rectangle\n");
        }
        else if((a<=b+c+d) && (b<=c+d+a) && (c<=d+a+b) && (d<=a+b+c) )
        {
            printf("quadrangle\n");
        }
        else
        {
            printf("banana\n");
        }
    }
    return 0;
}

