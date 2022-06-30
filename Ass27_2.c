#include<stdio.h>


void StrNCpyX(char *src,char *dest,int iNo)
{
	while(*src!='\0' && iNo!=0)
	{
		*dest=*src;
		dest++;
		src++;
		iNo--;

	}
	*dest!='\0';
}
int main()
{
	char Arr[30];
	char Brr[30];
	int iValue = 0;
	printf("Enter the String:\n");
	scanf("%[^'\n']s",Arr);

	printf("Enter the the size of String that u want:\n");
	scanf("%d",&iValue);

	StrNCpyX(Arr,Brr,iValue);

	printf("%s\n",Brr);


	return 0;
}