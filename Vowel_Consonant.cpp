#include<iostream>
#include<string.h>
using namespace std;

main()
{
	char ch;
	cout<<"Enter Charecter = ";
	cin>>ch;
	
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	   {
	   	cout<<"Character is Vowel"<<endl;
	   }
	   else
	   {
	   	cout<<"Character is Consonant"<<endl;
	   }
}
