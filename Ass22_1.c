#include<stdio.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAlph(char ch)
{
	int i = 0;
	if(ch=='A' || ch=='Z' || ch=='a' || ch=='z')
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int main()
{
	char cValue = '\0';
	BOOL bRet = FALSE;

	printf("Enter the character\n");
	scanf("%c",&cValue);

	bRet=ChkAlph(cValue);

	if(bRet==TRUE)
	{
		printf("It is Character\n");
	}
	else
	{
		printf("It is Not a character");
	}
	return 0;
}