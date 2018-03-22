#include <stdio.h>

void splitfloat( float x, int *intpart, float *fracpart );

int main()
{
    float x, fracpart;
    int intpart;

    scanf("%f", &x);
    splitfloat(x, &intpart, &fracpart);
    printf("The integer part is %d\n", intpart);
    printf("The fractional part is %g\n", fracpart);

    return 0;
}
void splitfloat( float x, int *intpart, float *fracpart )
{
 *intpart = (int)x%10 -*fracpart;
 //nvalid operands to binary % (have ‘float’ and ‘int’)
 //无效操作数的二进制%（有“浮”和“int”） 
  //*intpart = (int)x;
  *fracpart = x - *intpart;
}
