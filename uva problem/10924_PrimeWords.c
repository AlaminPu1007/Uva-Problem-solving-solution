#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char ch[100];
    while(gets(ch))
    {
        int i,sum=0,count=0,flag=0,j,sum1=0,l;
        l=strlen(ch);
        for(i=0;i<l;i++)///use len because ch[i]!='\0' get in judge queue,,//comment used,,you will get compilation error
        {
            if(ch[i]>='A'&&ch[i]<='Z')
            {
                sum+=ch[i]-38;

            }
            else if(ch[i]>='a'&&ch[i]<='z')
            {
                sum+=ch[i]-96;
            }
        }
        for(j=2;j<=sqrt(sum);j++)///must be use sqrt,,
        {
            if(sum%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("It is a prime word.\n");
        }
        else
        {
            printf("It is not a prime word.\n");
        }
    }
    return 0;
}
