#include <stdio.h>
#include <string.h>

#define MAXN 20


bool palindrome( char *s );

int main()
{
    char s[MAXN];

    scanf("%s", s);
    if ( palindrome(s)==true )
        printf("Yes\n");
    else
        printf("No\n");
    printf("%s\n", s);

    return 0;
}
bool palindrome(char *s)   //���巵��ֵΪ�������͵ĺ���  
{  
    char *a = s;
    int i = 0,j=0,k=0;  
    while (*a != '\0')     
    {  
        a++;  
        i++;  
    }  
    a--;                     //��Ϊ���һΪΪ'\0'���Լ�һλ  
    while (*s != '\0')       //���������Ƚ�  
    {  
        if (*s == *a)  
        {  
            k++;  
        }  
        else   
        {  
            return false;  
        }  
        s++;  
        a--;  
    }  
    if (k == i)           //���ÿ������� k=i����true  
    {  
        return true;  
    }  
}  
