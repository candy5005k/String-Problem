#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL ChkCapital(char ch)
{
	if(ch=='a'||ch=='z')
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
		printf("It is small case character\n");
	}
	else 
	{
		printf("It is not a small case character\n");
	}
	return 0;
}