#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    char ch[6];
    scanf("%d",&n);
    while(n--)
    {
        scanf("%s",&ch);
        if(strlen(ch)==5)
        {
            printf("3\n");
        }
        else  if((ch[0]=='o' && ch[1]=='n')||(ch[0]=='o' && ch[2]=='e')||(ch[1]=='n'&& ch[2]=='e'))
            {
                printf("1\n");
            }
            else
            {
                printf("2\n");
            }
    }
    return 0;
}
