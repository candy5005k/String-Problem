 #include<iostream>

using namespace std;

void struprX(char str[])
{
	 

	while(*str !='\0')
	{
		if(*str>='a' && *str<='z')
		{
			*str= *str-32;	 
		}
		str++; 
	}
	 
}
int main()
{
	char Arr[20];
	 

	cout<<"Enter String\n";
	cin.getline(Arr,20);

 	
 	struprX(Arr); 	//Display(100)
	cout<<"String Contain Upper|:"<<Arr<<"\n";

	return 0;
}