#include<stdio.h>

int CountSmall(char *str)
{
	int iCnt =0;
	while(*str!='\0')
	{
		if(*str>='a' && *str<='z')
		{
			iCnt++;
		}
		*str++;
	}

	return iCnt;
}
int main()
{
	char Arr[30];
	int iRet = 0;
	printf("Enter the String \n");
	scanf("%s",Arr);


	iRet=CountSmall(Arr);
	printf("The tptal Small Case char Are:%d\n",iRet);
	return 0;
}