 #include<iostream>

using namespace std;

void StrCpy(char *src ,char *dest)
{
	 
	while(*src!='\0')
	{
		*dest=*src;
		src++;
		dest++;
	}
	*dest='\0';///back slash zero;
 
	 
}
int main()
{
	char Arr[20];	//Bharleli vahi
	char Brr[20];	 //Kori vahi;

	cout<<"Enter String\n";
	cin.getline(Arr,20);

 	
 	StrCpy(Arr,Brr); 	//Display(100)
	cout<<"String is copied   |:"<<Brr<<"\n";

	return 0;
}
