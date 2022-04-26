///tried but not solved yet..,,,
#include<stdio.h>
int main()
{
    char ch[100];
    while(gets(ch))
    {
        int i,j,sum=0,l;
        l=strlen(ch);
        for(i=0;i<l;i++)
        {
           // if(ch[i]>='A'&&ch[i]<='Z')
           // {
                if(ch[i]=='A'||'B'||'C')
                {
                    printf("2");
                }
                else if(ch[i]=='D'||'E'||'F')
                {
                    printf("3");
                }
                else if(ch[i]=='G'||'H'||'I')
                {
                    printf("4");
                }
                else if(ch[i]=='J'||'K'||'L')
                {
                    printf("5");
                }
                else if(ch[i]=='M'||'N'||'O')
                {
                    printf("6");
                }
                else if(ch[i]=='P'||'Q'||'R'||'s')
                {
                    printf("7");
                }
                else if(ch[i]=='T'||'U'||'v')
                {
                    printf("8");
                }
                else if(ch[i]=='W'||'X'||'Y'||'Z')
                {
                    printf("9");
                }
                else
                {
                    printf("%c",ch[i]);
                }
       // }
            //else
             //   {
               //     printf("%s",ch);
               // }
    }
}
    return 0;
}
