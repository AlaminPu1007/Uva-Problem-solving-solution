///tried but not solved yet 15/4/2018
#include <stdio.h>
int main()
{
    char ch[1000];
    int i;
    scanf("%s",&ch);
    for(i=0;ch[i]!='\0';i++)
    {
        if(ch[i]=='"')
        {
            printf("``");
        }
        else
            {
    }
    return 0;
}
