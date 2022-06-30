#include<stdio.h>

int CountDifference(char str[])
{
	int iCnt1 =0;
	while(*str!='\0')
	{
		if(*str>='A' && *str<='Z')
		{
			iCnt1++;
		}
		*str++;
	}
	int iCnt2 =0;
	while(*str!='\0')
	{
		if(*str>='a' && *str<='z')
		{
			iCnt2++;
		}
		*str++;
	}

	return iCnt1-iCnt2;
}

int main()
{
	char Arr[20];
	int iRet =0;
	printf("Enter the String\n");
	scanf("%s",Arr);

	iRet = CountDifference(Arr);

	printf("The capital Characters Are :%d\n",iRet);
	return 0;
}