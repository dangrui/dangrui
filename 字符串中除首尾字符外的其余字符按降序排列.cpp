#include <stdio.h>
int fun(char *s,int num);
int main()
{
 char s[10];
 gets(s);
 fun(s,7);
 printf("%s",s);
 return 0;
}
int fun(char *s,int num)
{
  int k,j,n=1;
  int i; 
  char max=s[1];
   for(i=1;i<num-1;i++)
   {
     for(j=1;j<num-1-i;j++)
     {
       if(s[j]<s[j+1])
       {
         k=s[j];s[j]=s[j+1];s[j+1]=k;
       }
     }
   }
}
