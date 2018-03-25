#include<stdio.h>
void input(int *arr,int n);
void max_min(int *arr,int n);
void output(int *arr,int n);
int main()
{ int a[10];
input(a,10);
 max_min(a,10);
 output(a,10);
 return 0;
}

void input(int *arr,int n)
{
int i; 
for(i=0;i<n;i++)//n个数的数列总共扫描n-1次  
scanf("%d",arr+i);//数组下标的类型无效 
}
void max_min(int *arr,int n)
{
  int min =arr[0], max =arr[0] ;//[错误]的宣言“int arr [ 0 ]“阴影参数
  int i,t;
  int j=0,p=0;
for(i=0;i<n;i++)//n个数的数列总共扫描n-1次  
    {  
         
            if(*(arr+i)<min){//后一位数比前一位数大的话，就交换两个数的位置（升序）  
            min = *(arr+i);
            p =i ;
		
		}
		if(max<*(arr+i))	
		{  
            max = *(arr+i);
			j = i ;  
            }
			
			  
        }  
            t=*(arr+0);  
            *(arr+0)=*(arr+p);  
            *(arr+p)=t;
			 t=*(arr+n-1);  
            *(arr+n-1)=*(arr+j);  
            *(arr+j)=t; 
    }  

void output(int *arr,int n)
{
  int i;
  for(i = 0;i<n;i++)
  printf("%3d",arr[i]);//错误的一元“*”类型的参数（有“int”）
  //错误的一元“*”类型的参数（有“int”）
  
