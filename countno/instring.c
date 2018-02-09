#include <stdio.h>
int main(void) 
{
    char s[100],count=0,i;
    gets(s);
    for(i=0;s[i]!='\0';i++)
      if(s[i]>='0' && s[i]<='9')
        count++;
    printf("%d",count);
	return 0;
}
