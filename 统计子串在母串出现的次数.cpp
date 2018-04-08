#include<stdio.h>
int fun(char *str,char *substr);
int main()
{ char str[81]="asdasasdfgasdaszx67asdmklo",substr[4]="asd";
 int n;
 n=fun(str,substr);
 printf("n=%d\n",n);
 return 0;
}
int fun(char *str,char *substr)
{
    int i,j,n=0;
    for(i=0;str[i]!='\0';i++)
    {
        for(i=0,j=0;str[i]==substr[j];i++,j++)
        {
            if(substr[j+1]=='\0')
            {
                n++;
            }
        }
    }
    return n;
}
