#include<stdio.h>
typedef void ZERO;
ZERO strluprx(char str[])
{ 

	while(*str !='\0')
	{
		if((*str>='a') || (*str>='z'))
		{ 

				*str=*str-32;
		}
		 
		*str++;
	}
}
int main()
{
	char Arr[20];

	printf("Enter the Small Case string: \n");
	scanf("%[^'\n']s",Arr);

	strluprx(Arr);

	printf("Modified Capital String is: %s\n",Arr);
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