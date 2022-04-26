#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    printf("Lumberjacks:\n");
    while(n--)
    {
        int a,b,c,d,e,f,g,h,i,j;
        scanf("%d%d%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);
            if(a>b&&b>c&&c>d&&d>e&&e>f&&f>g&&g>h&&h>i&&i>j)
            {
                printf("Ordered\n");
            }
            else if(a<b&&b<c&&c<d&&d<e&&e<f&&f<g&&g<h&&h<i&&i<j)
                {
                    printf("Ordered\n");
                }
            else
            {
                printf("Unordered\n");
            }
        }
    return 0;
}
