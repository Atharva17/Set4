#include<stdio.h>
int main()
{
	char s[1000],line=0,i;
	gets(s);
	for(i=0;s[i]!=NULL;i++)
	{
	if(s[i]=='.' || s[i]=='\n' ||s[i]=='\t')
	line++;
	}
	printf("%d",line+1);
	return 0;
}
