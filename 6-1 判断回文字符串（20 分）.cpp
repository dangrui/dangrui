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
bool palindrome(char *s)   //定义返回值为布尔类型的函数  
{  
    char *a = s;
    int i = 0,j=0,k=0;  
    while (*a != '\0')     
    {  
        a++;  
        i++;  
    }  
    a--;                     //因为最后一为为'\0'所以减一位  
    while (*s != '\0')       //进行两个比较  
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
    if (k == i)           //如果每个都相等 k=i返回true  
    {  
        return true;  
    }  
}  
