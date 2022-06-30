#include<stdio.h>
 
void DisplayASCII(int no)
{
	if(no==0 || no ==127)
	{
		printf("%d is the ASCII Value of given Number\n");
	}
	else
	{
		printf("it is not the ASCII Value of given Number\n");
	}
}
int main()
{
	int iValue = 0;
	 
	printf("Enter the Number to see ASCII Value:\n");
	scanf(" %[^\n]d",&iValue);
	DisplayASCII(iValue);
	return 0;
}
