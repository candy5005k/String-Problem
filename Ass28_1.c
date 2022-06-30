#include<stdio.h>
void StrCpyRev(char *src ,char *dest)
{
	char *start=src;
	char *end=src;
	char temp;
	while(*end!='\0')
	{
		end++;

	}
	end--;
	while(start<end)
	{

		temp=*start;
		*start=*end;
		*end=temp;
		dest++;
		end--;
		*dest=*start;
	}
	 *dest='\0';
}
int main()
{
	char Arr[30]="Marvellous Python";
	char Brr[30];

	StrCpyRev(Arr,Brr);

	printf("%s",Brr);
	return 0;
}