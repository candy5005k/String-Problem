#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str , char *ch)
{
	while(*str!='\0')
	{
		if(*str==*ch)
		{
			return TRUE;
		}	
		else
		{
			return FALSE;
		}
		str++;
	}
}
int main()
{
	char Arr[20];
	char cValue[10];
	BOOL iRet= FALSE;
	printf("Enter the String\n");
	scanf(" %[^'\n']s",Arr);

	printf("Enter the Character or characters \n");
	scanf("%s",cValue);

 
	iRet = ChkChar(Arr,cValue);

	if(iRet==TRUE)
	{
		printf("The given characters is present \n");
	}
	else
	{
		printf("The given character is not present \n");
	}
	 	return 0;
}