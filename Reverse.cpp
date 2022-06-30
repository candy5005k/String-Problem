 #include<iostream>

using namespace std;

void StrrevX(char *str)
{
	char *start = str;
	char *end   =str;
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
	 

	cout<<"Enter String\n";
	cin.getline(Arr,20);

 	
 	StrrevX(Arr); 	//Display(100)
	cout<<"String is  |:"<<Arr<<"\n";

	return 0;
}