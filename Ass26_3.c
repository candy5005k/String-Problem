#include<stdio.h>
#include<string.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CharIndex(char *str,char *ch,int iLength)
{
 
 
	BOOL iCnt = FALSE; 
	 for(iCnt=0;iCnt!='\0',iCnt<=iLength;iCnt++)
	 {
	 	if(*(str+iCnt)==*ch)
	 	{
	 		break;
	 	}
	 }

	if(iCnt==iLength)
	{
		return -1;
	}
	else
	{
		return iCnt;
	}
}
 
int main()
{
	char Arr[20];
	char cValue[10];
	BOOL iRet =FALSE;

	printf("Enter the String: \n");
	scanf(" %[^'\n']s",Arr);

	printf("Enter the Character:c \n");
	scanf("%s",cValue);

	iRet=CharIndex(Arr,cValue,10);

	if(iRet==-1)
	{
		
		printf("Character  index is not Found\n");	
	}
	else
	{
		printf("Character  index is %d\n",iRet);	
	}
	

	return 0;

}