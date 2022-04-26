#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;
int main()
{
    long long int i,n,a[ 2000000];
    while(scanf("%lld",&n)!=EOF)
    {
        if(n==0)
        {
            break;
        }
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
        }
        sort(a,a+i);
        for(i=0;i<n;i++)
        {
            printf("%lld",a[i]);
            if(i!=(n-1))
            {
                printf(" ");
            }
        }
         printf("\n");
    }
    return 0;
}
