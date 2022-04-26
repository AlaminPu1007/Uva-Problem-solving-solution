///TRIED BUT NOT SOLVED YET,,,..
#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    char ch[100];
    int i,l,s,j;
    while(scanf("%d",&n)!=EOF)
    {
        scanf("%s",ch);
        l=strlen(ch);
        s=l/n;
        printf("%d",s);
    }
    return 0;
}
