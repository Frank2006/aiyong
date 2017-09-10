#include <stdio.h>
#include <string.h>
#define LIM 20
#define SIZE 81
void stsrt(char *pin[], int num);
int main(void)
{
	char storage[LIM][SIZE];
	char *ptr[LIM];
	int ct=0;
	int i;
	
	printf("PLS enter %d lines of series of char:\n",LIM);
	puts("PLS enter \"Enter Button\"in a new line to stop program.");
	while(ct<LIM&&gets(storage[ct])!=NULL&&storage[ct][0]!='\0')
	{
		ptr[ct]=storage[ct];
		ct++;
	}
	printf("%d\n",ct);
	stsrt(ptr,ct);
	
	puts("\nHere is the sorted list:\n");	
	for(i=0;i<ct+1;i++)
	puts(storage[i]);

	
	return 0;
}

void stsrt(char *pin[], int num)
{
	int top,seek;
	char *temp;
	
	for(top=0;top<num;top++)
	for(seek=top+1;seek<num;seek++)
		
		{
		if(strcmp(pin[top],pin[seek])>0)
		{
		temp=pin[top];
		pin[top]=pin[seek];
		pin[seek]=temp;	
		}
		}
	
	
}
