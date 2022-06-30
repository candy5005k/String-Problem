#include<stdio.h>

void ConCatStrCpyX(char *src,char *dest)
{

	 while(*src!='\0')
	 {
	 	*src++;
	 }
	 *src--;
	
}
int main()
{
	char Arr[30];
	char Brr[30];

	printf("Enter the 1st String\n");
	scanf("%[^'\n']s",Arr);

	printf("Enter the 2nd String\n"); 
	scanf("%s",Brr);

	ConCatStrCpyX(Arr,Brr);

	printf("Concat String %s\n",Brr); 

	return 0;
}