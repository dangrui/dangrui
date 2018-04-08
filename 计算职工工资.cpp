#include<stdio.h>
struct student{
      char name[10];
      float ji,fu,zhi,salary;
 }
 s[10000];
int main()
{
int n,i;
scanf("%d",&n);

while(i<n)
{
scanf("%s %f %f %f",s[i].name,&s[i].ji,&s[i].fu,&s[i].zhi);
s[i].salary = s[i].ji + s[i].fu - s[i].zhi;
i++;
}
for(i=0; i<n; i++)
     {
     printf("%s %.2lf\n",s[i].name,s[i].salary);    
     }
     return 0;
}
