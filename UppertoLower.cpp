 #include<iostream>

using namespace std;

void strwrX(char str[])
{
	 

	while(*str !='\0')
	{
		if(*str>='A' && *str<='Z')
		{
			*str= *str+32;	 
		}
		str++; 
	}
	 
}
int main()
{
	char Arr[20];
	 

	cout<<"Enter String\n";
	cin.getline(Arr,20);

 	
 	strwrX(Arr); 	//Display(100)
	cout<<"String Contain  lower|:"<<Arr<<"\n";

	return 0;
}