#include<iostream>

using namespace std;

void Display(char	str[])
{
	int i =0;
	while(*str!='\0')
	{
		cout<<*str<<endl;
		str++;
	}

}
int main()
{
	char Arr[20];

	cout<<"Enter your String\n";
	scanf("%[^'\n']s",Arr);

 	Display(Arr); 	//Display(100)

	

	return 0;
}