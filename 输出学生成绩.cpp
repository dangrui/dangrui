#include <stdio.h>
#include <stdlib.h> 
int main()
{
   int n,i=0,*p;
   float average,max=0,min=0,sum=0;
  scanf("%d",&n);
  if((p=(int*)calloc(n,sizeof(int)))==NULL){
    printf("Not able to allocate memory.\n");
    exit(1);
  }
  for(i=0;i<n;i++)
  {
    scanf("%d",p+i);
    if(i==0)
    {
        max=*(p+i);min=*(p+i);
    }
    sum=sum+*(p+i);
    if(max<*(p+i))
    max=*(p+i);
    if(min>*(p+i))
    min=*(p+i);
  }
  printf("average = %.2f\n",sum*1.0/n);
  printf("max = %.2f\n",max);
  printf("min = %.2f\n",min);
  free(p);
}

