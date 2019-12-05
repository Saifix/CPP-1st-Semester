#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int i,len;
	char str[100];
	cout<<"Please enter the string : ";
	cin>>str;
	len=strlen(str);
	for(i=0;i<len/2;i++)
	{
		if(str[i]!=str[len-1-i])
		{
			cout<<"String is not palindrome."<<endl;
			break;
		}
	}
	if(i==len/2)
	{
		cout<<"String is a palindrome."<<endl;
	}
	system("pause");
}

