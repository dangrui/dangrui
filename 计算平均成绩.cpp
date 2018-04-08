#include <stdio.h>
  
struct student{
     char studentc[6];
     char name[10];
     int mark;
 }s[10];
 
 int main ()
 {
     int n;
     scanf("%d",&n);
     
     int i;
     float sum = 0;
     for(i=0; i<n; i++) 
     {
         scanf("%s %s",s[i].studentc,s[i].name);
         scanf("%d",&s[i].mark);
         sum = sum +s[i].mark;
     }
     float avg;
     avg = sum/n;
     printf("%.2f\n",avg);
     for(i=0; i<n; i++)
     {
         if(avg > s[i].mark)
         {
             printf("%s %s\n",s[i].name,s[i].studentc);
         }
     }
     return 0;
  } 
