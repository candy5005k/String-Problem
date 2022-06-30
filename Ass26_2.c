#include<stdio.h>
#include<string.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CountChar(char *str,char *ch)
{
	BOOL iCnt=FALSE;
	while(*str!='\0')
	{
		if(*str==*ch)
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
}
 
int main()
{
	char Arr[20];
	char cValue[10];
	BOOL iRet =FALSE;

	printf("Enter the String: \n");
	scanf(" %[^'\n']s",Arr);

	printf("Enter the Character: \n");
	scanf("%s",cValue);

	iRet=CountChar(Arr,cValue);

	
	printf("Character  index is %d",iRet);

	return 0;

}