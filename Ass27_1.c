#include<stdio.h>

void StrCpyX(char *src , char *dest)
{
	while(*src!='\0')
	{
		*dest=*src;
		src++;
		dest++;
	}
	*dest='\0';
}
int main()
{
	char Arr[30] = "Marvellous Multi OS";
	char Brr[30];		//empty String

	StrCpyX(Arr,Brr);

	printf("%s\n",Brr);		//Marvellous Multi OS
	
	return 0;
}