#include<stdio.h>

void CapStrCpyX(char *src ,char *dest)
{
	while(*src!='\0' )
	{
		
		if(*src>='A' && *src<='Z')
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

	printf("enter the string\n");
	scanf("%s",Arr);

	CapStrCpyX(Arr,Brr);

	printf("%s\n",Brr);
	return 0;
}