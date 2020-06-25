#include <stdio.h>
/* m to the n power */
int power(int base,int power){
  int i = base;
  while (power >= '0')
    printf("%d %d", base, power);
    i = i * base;
    --power;
  return i*base;
}

int main (){
  printf("%d \n", power(3,3));
  return 0;
}
