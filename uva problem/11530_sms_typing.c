///tryed but no solved yet
#include<stdio.h>
#include<string.h>
int main()
{
    int i,n;
    char ch[100],count=0,count1=0,count2=0;
    gets(ch);
    n=strlen(ch);
    for(i=0;i<=n;i++)
    {
        if((ch[i]=='a')||(ch[i]=='d')||(ch[i]=='g')||(ch[i]=='j')||(ch[i]=='m')||(ch[i]=='p'))
        {
            count++;
        }
        else if((ch[i]=='g')||(ch[i]=='h')||(ch[i]=='i')||(ch[i]=='j')||(ch[i]=='k')||(ch[i]=='l'))
        {
            count1++;
        }
        else if((ch[i]=='m')||(ch[i]=='n')||(ch[i]=='o')||(ch[i]=='p')||(ch[i]=='q')||(ch[i]=='r'))
        {
            count++;
        }
        else if((ch[i]=='s')||(ch[i]=='t')||(ch[i]=='u')||(ch[i]=='v')||(ch[i]=='w')||(ch[i]=='x'))
        {
            count2++;
        }
        else if((ch[i]=='y')||(ch[i]=='z'))
        {
            count++;
        }
    }
    printf("%d",count+count1+count2);
    return 0;
}

