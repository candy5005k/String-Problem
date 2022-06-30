#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL ChkCapital(char ch)
{
	if(ch=='A'||ch=='Z')
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
	char cValue='\0';
	BOOL iRet = FALSE;
	printf("Enter the character\n");
	scanf("%c",&cValue);

	iRet=ChkCapital(cValue);
	if(iRet==TRUE)
	{
		printf("It is Capital character\n");
	}
	else 
	{
		printf("It is not a Capital character\n");
	}
	return 0;
}