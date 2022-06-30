#include<iostream>

using namespace std;

int StrlenX(char str[])
{
	int iCnt=0;
	int count =
	while(*str!='\0')
	{
		if(*str=='l'|| *str=='L')
		{
			iCnt++;	
		}
		
		str++;
	}
	return iCnt;

}
int main()
{
	char Arr[20];
	int iRet = 0;
	cout<<"Enter your String\n";
	cin.getline(Arr,20);

 	
 	iRet = StrlenX(Arr); 	//Display(100)
	
	cout<<iRet<<" times\n";

	return 0;
}