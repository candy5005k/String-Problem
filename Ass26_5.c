#include<stdio.h>

void StrRev(char *str)
{
	char *start=str;	
	char *end=str;
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

		start++;
		end--;
		 
	}
}
int main()
{
	char Arr[20];

	printf("Enter the String\n");
	scanf("%[^'\n']s",Arr);

	StrRev(Arr);
	printf("The Modified Reverse:%s\n",Arr);
	return 0;
}