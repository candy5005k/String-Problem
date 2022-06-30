 #include<iostream>

using namespace std;

void StrCpy(char *str ,char *dest)
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
	char Arr[20];	//Bharleli vahi
	char Brr[20];	 //Kori vahi;

	cout<<"Enter String\n";
	cin.getline(Arr,20);
	
	cout<<"Enter String\n";
	cin.getline(Brr,20);
 	
 	StrCpy(Arr,Brr); 	//Display(100)
	cout<<"String is copied   |:"<<Brr<<"\n";

	return 0;
}	