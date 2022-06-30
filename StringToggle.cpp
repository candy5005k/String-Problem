 #include<iostream>

using namespace std;

void strToggelX(char str[])
{
	 

	while(*str !='\0')
	{
		if(*str>='a' && *str<='z')
		{
			*str= *str-32;	 
		}
		else if(*str>='A' && *str<='Z')
		{
			*str = *str+32;
		}
		str++; 
	}
	 
}
int main()
{
	char Arr[20];
	 

	cout<<"Enter String\n";
	cin.getline(Arr,20);

 	
 	strToggelX(Arr); 	//Display(100)
	cout<<"String is  |:"<<Arr<<"\n";

	return 0;
}