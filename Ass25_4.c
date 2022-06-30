#include<stdio.h>

void DisplayDigit(char str[])
{
	int iCnt =0;
	printf("the Given String contain Digiys Are: \n");
	while(*str!='\0')
	{
		if(*str>= '0' && *str<='9')
		{
		printf("%c",*str);

		}
		 
		str++;
	

	}
	printf("\n");
}

int main()
{
	char Arr[20];
	printf("Enter the string \n");
	scanf("%s",Arr);

	DisplayDigit(Arr);
	return 0;
}