#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    long long int sum,n,rev,c=0,co;
    cin>>n;
    while(n--)
    {
        long long int a;
        cin>>a;
        co=a;
        c++;
        while(sum!=1 && sum!=4)
        {
            sum=0;
            while(a!=0)
            {
                rev=a%10;
                sum+=(rev*rev);
                a/=10;
            }
            a=sum;
        }
            if(sum==1)
            {
                printf("Case #%lld: %lld is a Happy number.\n",c,co);
            }
            else
            {
                printf("Case #%lld: %lld is an Unhappy number.\n",c,co);
            }
    }
    return 0;
}
