#include<stdio.h>

void SmallStrCpyX(char *src ,char *dest)
{
	while(*src!='\0')
	{
		if(*src>='a' && *src<='z' )
		{
			*dest=*src;
			dest++;

		}
		src++;
	}
	*dest!='\0';
}
int main()
{
	char Arr[30];
	char Brr[30];

	printf("Enterthe String: \n");
	scanf("%s",Arr);

	SmallStrCpyX(Arr,Brr);

	printf("%s\n",Brr);
	return 0;
}