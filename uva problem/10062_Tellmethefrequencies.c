/*//tried but not solved yet...

#include<stdio.h>
int main()
{
    char ch[100];
    while(scanf("%s",&ch)!=EOF)
    {
        int i;
        for(i=0;ch[i]!='\0';i++)
        {
            if(ch[i]=='A')
            {

            }
        }
    }
}
*/
#include <stdio.h>

int main()
{
    int i,count=0,n;
    scanf("%d",&n);
    for(i=1;i<=n;i+=2)
    {
        count++;
    }
    printf("%d",count);

    return 0;
}

