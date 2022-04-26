#include<stdio.h>
int main()
{
    int n,j;
    char ch[20];
    scanf("%d",&n);
    int i,c=0,c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0,c10=0,c11=0,c12=0,c13=0;
    int c14=0,c15=0,c16=0,c17=0,c18=0,c19=0,c20=0,c21=0,c22=0,c23=0,c24=0,c25=0;
    for(j=0;j<n;j++)
    {
        scanf("%s",&ch);
        for(i=0;ch[i]!='\0';i++)
        {
            if(ch[i]=='A'||ch[i]=='a')
            {
                c++;
            }
            else if(ch[i]=='B'||ch[i]=='b')
            {
                c1++;
            }
             else if(ch[i]=='C'||ch[i]=='c')
            {
                c2++;
            }
             else if(ch[i]=='D'||ch[i]=='d')
            {
                c3++;
            }
             else if(ch[i]=='E'||ch[i]=='e')
            {
                c4++;
            }
             else if(ch[i]=='F'||ch[i]=='f')
            {
                c5++;
            }
             else if(ch[i]=='G'||ch[i]=='g')
            {
                c6++;
            }
             else if(ch[i]=='H'||ch[i]=='h')
            {
                c7++;
            }
             else if(ch[i]=='I'||ch[i]=='i')
            {
                c8++;
            }
             else if(ch[i]=='J'||ch[i]=='j')
            {
                c9++;
            }
            else if(ch[i]=='K'||ch[i]=='k')
            {
                c10++;
            }
             else if(ch[i]=='L'||ch[i]=='l')
            {
                c11++;
            }
             else if(ch[i]=='M'||ch[i]=='m')
            {
                c12++;
            }
             else if(ch[i]=='N'||ch[i]=='n')
            {
                c13++;
            }
             else if(ch[i]=='O'||ch[i]=='o')
            {
                c14++;
            }
             else if(ch[i]=='P'||ch[i]=='p')
            {
                c15++;
            }
             else if(ch[i]=='Q'||ch[i]=='q')
            {
                c16++;
            }
             else if(ch[i]=='R'||ch[i]=='r')
            {
                c17++;
            }
            else if(ch[i]=='S'||ch[i]=='s')
            {
                c18++;
            }
             else if(ch[i]=='T'||ch[i]=='t')
            {
                c19++;
            }
             else if(ch[i]=='U'||ch[i]=='u')
            {
                c20++;
            }
             else if(ch[i]=='V'||ch[i]=='v')
            {
                c21++;
            }
             else if(ch[i]=='W'||ch[i]=='w')
            {
                c22++;
            }
             else if(ch[i]=='X'||ch[i]=='x')
            {
                c23++;
            }
             else if(ch[i]=='Y'||ch[i]=='y')
            {
                c24++;
            }
             else if(ch[i]=='Z'||ch[i]=='z')
            {
                c25++;
            }
        }

            if('a'>0||'A'>0)
            {
                printf("A %d\t\n",c);
            }
            else if('b'>0||'B'>0)
            {
                printf("B %d\n",c1);
            }
            else if('c'>0||'C'>0)
            {
                printf("C %d\n",c2);
            }
            else if('D'>0||'d'>0)
            {
                printf("D %d\n",c3);
            }
            else if('E'>0||'e'>0)
            {
                printf("E %d\n",c4);
            }
            else if('F'>0||'f'>0)
            {
                printf("F %d\n",c5);
            }
            else if('G'>0||'g'>0)
            {
                printf("G %d\n",c6);
            }
            else if('H'>0||'h'>0)
            {
                printf("H %d\n",c7);
            }
            else if('I'>0||'i'>0)
            {
                printf("I %d\n",c8);
            }

            else if('J'>0||'j'>0)
            {
                printf("J %d\n",c9);
            }
            else if('K'>0||'k'>0)
            {
                printf("K %d\n",c10);
            }
            else if('L'>0||'l'>0)
            {
                printf("L %d\n",c11);
            }
            else if('M'>0||'m'>0)
            {
                printf("M %d\n",c12);
            }
            else if('N'>0||'n'>0)
            {
                printf("N %d\n",c13);
            }
            else if('O'>0||'o'>0)
            {
                printf("O %d\n",c14);
            }
            else if('P'>0||'p'>0)
            {
                printf("P %d\n",c15);
            }
            else if('Q'>0||'q'>0)
            {
                printf("Q %d\n",c16);
            }
            else if('R'>0||'r'>0)
            {
                printf("R %d\n",c17);
            }
            else if('S'>0||'s'>0)
            {
                printf("S %d\n",c18);
            }
            else if('T'>0||'t'>0)
            {
                printf("T %d\n",c19);
            }
            else if('U'>0||'u'>0)
            {
                printf("U %d\n",c20);
            }
            else if('V'>0||'v'>0)
            {
                printf("V %d\n",c21);
            }
            else if('W'>0||'w'>0)
            {
                printf("W %d\n",c22);
            }
            else if('X'>0||'x'>0)
            {
                printf("X %d\n",c23);
            }
            else if('Y'>0||'y'>0)
            {
                printf("Y %d\n",c24);
            }
            else if('Z'>0||'z'>0)
            {
                printf("Z %d\n",c25);
            }
    }


    return 0;
}
