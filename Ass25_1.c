#include<stdio.h>
typedef void ZERO;
ZERO strlwrx(char str[])
{ 

	while(*str !='\0')
	{
		if((*str>='A') || (*str>='Z'))
		{ 

				*str=*str+32;
		}
		/*
		else if((*str==' '))
		{
			*str=
		}
		*/
		*str++;
	}
}
int main()
{
	char Arr[20];

	printf("Enter the Capital String \n");
	scanf("%[^'\n']s",Arr);

	strlwrx(Arr);

	printf("Modified Samll c String is: %s\n",Arr);
	return 0;
}

/*
while(*ch!='\0')
	{
		if(*ch>='a' && *ch<='z')
		{
			*ch= *ch-32;															////DRY RUN PLEASE
		}
		ch++;

	}
*/