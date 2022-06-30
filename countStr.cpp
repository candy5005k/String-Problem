#include<iostream>

using namespace std;

int StrlenX(char	str[])
{
	int iCnt=0;
	while(*str!='\0')
	{
		iCnt++;
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
	
 	cout<<iRet<<endl;

	return 0;
}