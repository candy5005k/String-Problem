#include<stdio.h>


void DisplayRange(char str)
{
	char ch = 'A';
	while(str<='Z')
	{
		printf("%c\t",str);
		str++;
	
	}
	while(str>='a')
	{
		printf("%c\t",str);
		str--;
	}
}
int main()
{
	char cValue='\0';

	printf("Enter the Character\n");
	scanf("%c",&cValue);
	DisplayRange(cValue);
	return 0;
}