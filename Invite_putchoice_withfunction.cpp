#include <stdio.h>
char get_choice(void);
char get_first(void);
int get_int(void);
void count(void);
int main(void)
{
	int choice;
	void count(void);
	while((choice = get_choice())!='q')
	{
		switch(choice)
		{
			case 'a':printf("By low, sell high.\n");
			         break;
			case 'b':putchar('\a');
			         break;
			case 'c':count(); 
			         break;
			default:printf("Program erroe!\n");
			         break;
		}
	}
	printf("Bye.\n");
	return 0;
}

void count(void)
{
	int n,i;
	printf("Count how far? Enter an integer:\n");
	n = get_int();
	for(i=1;i<=n;i++)
	printf("%d\n",i);
	while(getchar()!='\n')
	continue;//避免输入数字后的回车键被读入 
}

char get_choice(void)
{
	int ch;
	
	printf("Enter the letter of your choice:\n");
	printf("a.advice                   b.bell\n");
	printf("c.count                    q.quilt\n");
	ch = get_first();
	while((ch<'a'||ch>'c')&&ch!='q')
	{
		printf("Please respond with a,b,c or q.\n");
		ch = get_first();
	}
	return ch;
}

char get_first(void)
{
	int ch;
	ch = getchar();
	while (getchar()!='\n')
	continue;//用于读出输入数字后的回车键后再将整数值返回 
	return ch;
}

int get_int()
{
	int input;
	char ch;
	
	while(scanf("%d",&input)!=1)
	{
		while((ch=getchar())!='\n')//确保后面输出的是回车键前面的字符 
		putchar(ch);
	    printf("is not an integer.\nPlease enter an");
	    printf("integer value, such as 25,-178 or 3:");
	}
	return input;	
}

