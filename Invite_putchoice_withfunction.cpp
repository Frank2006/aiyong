#include <stdio.h>
int main(void)
{
	char ch;
	int i=0,j=0,k=0;
	while((ch=getchar())!='#')
	{
		if(ch=='e')
		continue;
		if(ch=='i')
		i++;
		}
	printf("%d\n",i);
	return 0;
 } 

