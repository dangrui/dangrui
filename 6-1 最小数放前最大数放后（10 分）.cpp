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
for(i=0;i<n;i++)//n�����������ܹ�ɨ��n-1��  
scanf("%d",arr+i);//�����±��������Ч 
}
void max_min(int *arr,int n)
{
  int min =arr[0], max =arr[0] ;//[����]�����ԡ�int arr [ 0 ]����Ӱ����
  int i,t;
  int j=0,p=0;
for(i=0;i<n;i++)//n�����������ܹ�ɨ��n-1��  
    {  
         
            if(*(arr+i)<min){//��һλ����ǰһλ����Ļ����ͽ�����������λ�ã�����  
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
  printf("%3d",arr[i]);//�����һԪ��*�����͵Ĳ������С�int����
  //�����һԪ��*�����͵Ĳ������С�int����
  
