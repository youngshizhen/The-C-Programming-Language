#include <stdio.h>

int main(void)
{
     float a,b,c,sum;
     printf("Input for two floats:");
     scanf("%f%f%f", &a,&b,&c);
     printf("a = %f, b = %f, c = %f\n", a,b);
     sum = a + b + c;
     printf("sum = %f\n\n", sum);
     return 0;

}
