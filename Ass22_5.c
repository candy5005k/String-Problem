#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkCapital(char ch)
{
	if(ch=='a'||ch=='A')
	{
		printf("Your exam at 7.00 AM");
		 
	}
	else if(ch=='b'||ch=='B')
	{
		printf("Your exam at 8.30 AM");
		 
	}
	else if(ch=='c'||ch=='C')
	{
		printf("Your exam at 9.30 AM");
	}
	else if(ch=='d'||ch=='D')
	{
		printf("Your exam at 10.30 AM");
	}
	

}

int main()
{
	char cValue='\0';
	BOOL iRet = FALSE;
	printf("Enter the character\n");
	scanf("%c",&cValue);

	iRet=ChkCapital(cValue);
	return 0;
}