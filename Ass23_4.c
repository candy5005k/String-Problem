#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSymbol(char str)
{
	if(str=='!' ||str=='@' ||str=='#' ||str=='$'
	 ||str=='%' ||str=='^' ||str=='&' ||str=='*' )
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
	BOOL iRet= FALSE;

	printf("Enter the Character\n");
	scanf("%c",&cValue);
	
	iRet = ChkSymbol(cValue);

	if(iRet==TRUE)
	{
		printf("It is Special Symbol\n");
	}
	else
	{
		printf("It is not a Special Symbol\n");
	}
	return 0;

}