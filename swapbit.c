#include <stdio.h>
int main(void) 
{
  int a,b;
  scanf("%d%d",&a,&b);
  printf("Before swapping\na=%d\tb=%d",a,b);
  a=a^b;
  b=a^b;
  a=a^b;
  printf("\nAfter swapping\na=%d\tb=%d",a,b);
	return 0;
}
