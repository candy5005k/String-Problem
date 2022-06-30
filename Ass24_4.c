#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL ChkVowel(char *str)
{
	while(*str!='\0')
	{
		if(*str == 'a' ||*str=='e' || 
		*str=='i'|| *str=='o'|| *str=='u')
		{
			return TRUE;
		}
		else
		{
			return FALSE;
		}
		//*str++;
	}
}

int main()
{
	char Arr[20];
	BOOL iRet = FALSE;
	printf("Enter the String \n");
	scanf("%s",Arr);

	iRet = ChkVowel(Arr);

	if(iRet == TRUE)
	{
		printf("String Contain Vowels\n");
	}
	else
	{
		printf("String does't Contain Vowels\n");
	}
	return 0;
}