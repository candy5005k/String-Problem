#include<stdio.h>

int CountWhite(char *str)
{
	int iCnt = 0;

	while(*str!='\0')
	{
		if(*str==32)
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
	int iRet =0;

	printf("Enter the String \n");
	scanf("%[^'\n']s",Arr);

	iRet = CountWhite(Arr);
	printf("The number of White Spaces are: %d\n",iRet);
	return 0;
}