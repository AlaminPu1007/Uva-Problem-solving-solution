# include <stdio.h>
# include <string.h>
int main()
{
     char c[100];
    int count=0;
    while(scanf("%s",&c)!=EOF)
    {
        count++;
        if(strcmp(c, "#")==0)
        {
            break;
        }
        else if(strcmp(c, "HELLO")==0)
        {
            printf("Case %d: ENGLISH\n",count);
        }
        else if(strcmp(c, "HOLA")==0)
        {
            printf("Case %d: SPANISH\n",count);
        }
        else if(strcmp(c, "HALLO")==0)
        {
            printf("Case %d: GERMAN\n",count);
        }
        else if(strcmp(c, "BONJOUR")==0)
        {
            printf("Case %d: FRENCH\n",count);
        }
        else if(strcmp(c, "CIAO")==0)
        {
            printf("Case %d: ITALIAN\n",count);
        }
        else if(strcmp(c, "ZDRAVSTVUJTE")==0)
        {
            printf("Case %d: RUSSIAN\n",count);
        }
        else
        {
            printf("Case %d: UNKNOWN\n",count);
        }
    }
    return 0;
}
