#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkDigit(char ch)
{
	if(ch == 'A' || ch == 'Z' || ch == 'a' || ch == 'z')
	{
		return FALSE;
	}
	else
	{
		return TRUE;
	}
}
int main()
{
	char cValue = '\0';
	BOOL iRet = FALSE;
	printf("Enter the Character\n");
	scanf("%c",&cValue);
	iRet = ChkDigit(cValue);

	if(iRet==TRUE)
	{
		printf("TRUE\n");
	}
	else
	{
		printf("FALSE\n");
	}
	return 0;
}
