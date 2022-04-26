#include<stdio.h>
#include<string.h>
int main()
{
    int sum,i,l=0,n,t=0;
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        char ch[1000];
        t++;
        sum=0;
        gets(ch);
        l=strlen(ch);
        for(i=0;i<l;i++)
        {
            if(ch[i]=='a'||ch[i]=='d'||ch[i]=='g'||ch[i]=='j'
               ||ch[i]=='m'||ch[i]=='p'||ch[i]=='t'||ch[i]=='w')
            {
                sum+=1;
            }
            else if(ch[i]=='b'||ch[i]=='e'||ch[i]=='h'||ch[i]=='k'
               ||ch[i]=='n'||ch[i]=='q'||ch[i]=='u'||ch[i]=='x')
            {
                sum+=2;
            }
            else if(ch[i]=='c'||ch[i]=='f'||ch[i]=='i'||ch[i]=='l'
               ||ch[i]=='o'||ch[i]=='r'||ch[i]=='v'||ch[i]=='y')
            {
                sum+=3;
            }
            else if(ch[i]=='s'||ch[i]=='z')
            {
                sum+=4;
            }
            else if(ch[i]==' ')
            {
                sum+=1;
            }
        }
        printf("Case #%d: %d\n",t,sum);
    }
    return 0;
}
