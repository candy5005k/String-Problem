#include<stdio.h>
#include<string.h>



void Display(char ch[])
{
	while(*ch!='\0')
	{
		if(*ch>='a' && *ch<='z')
		{
			*ch= *ch-32;															////DRY RUN PLEASE
		}
		ch++;

	}
	
		 
}
int main()
{
	char cValue[20];
	printf("Enter the Character:  ");
	scanf("%s",cValue);

	//cRet=
	 Display(cValue);

	printf("String contain Upper:  %s\n",cValue);
	
	return 0;
}	