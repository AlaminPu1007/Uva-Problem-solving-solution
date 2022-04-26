#include<stdio.h>
long trib(int n, int back)
{
long sum=0,count;
int i;
count++;
if(n<=0) return 0;
if(n==1) return 1;
for(i=1;i<=back;i++)
sum+=trib(n-i,back);
return sum;
}
void main(void)
{
    int count=0;
    trib(5,5);
    printf(" %l\n",count);
}

