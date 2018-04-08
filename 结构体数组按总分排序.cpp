#include <stdio.h>
struct student					
{
int num;
char name[15];
float score[3];
float sum;
};
void calc(struct student *p,int n);	 
void sort(struct student *p,int n);
int main()
{
struct student stu[5];
int i,j;
float f;
for(i=0;i<5;i++)
{
	scanf("%d%s",&stu[i].num,stu[i].name);
	for(j=0;j<3;j++)
	{ 
    	scanf("%f",&f);
		stu[i].score[j]=f;
	}
}
calc(stu,5);
sort(stu,5);
for(i=0;i<5;i++)
{
	printf("%5d%15s",stu[i].num,stu[i].name);
	printf("  %.1f  %.1f  %.1f  %.1f\n",stu[i].score[0],stu[i].score[1],stu[i].score[2], stu[i].sum);
}
return 0;
}

void calc(struct student *p,int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        p->sum=0;
        for(j=0;j<3;j++)
        {
            p->sum=p->sum+p->score[j];
        }
        p++;
    }
}
void sort(struct student *p,int n)
{
    int i,j;
    struct student t;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(p[j].sum<p[j+1].sum)
            {
                t=p[j];p[j]=p[j+1];p[j+1]=t;
            }
        }
    }
}
