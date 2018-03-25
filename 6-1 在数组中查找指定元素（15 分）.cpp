#include <stdio.h>
#define MAXN 10

int search( int list[], int n, int x );

int main()
{
    int i, index, n, x;
    int a[MAXN];

    scanf("%d", &n);
    for( i = 0; i < n; i++ )
        scanf("%d", &a[i]);
    scanf("%d", &x);
    index = search( a, n, x );
    if( index != -1 )
        printf("index = %d\n", index);
    else
        printf("Not found\n");

    return 0;
}
int search(int list[],int n,int x)    
//如果找到一样的值，返回下标，下标是从0开始的，所以返回值不加1
{
    int i;//最小下标
    for(i = 0;i <= n;i++)
    {
        if(list[i] == x)
            return i;
    }
    return -1;
}
