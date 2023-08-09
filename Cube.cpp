#include<iostream>
#include<string.h>
using namespace std;

main()
{
	int a[] = {3,5,6,8,9};
	int i;
	cout<<"Cube 3,5,6,8,9 : "<<endl;
	for(i=0;i<5;i++)
	 {
	 	a[i] = a[i]*a[i]*a[i];
	 }
	 for(i=0;i<5;i++)
	 {
	 	cout<<"Cube = "<<a[i]<<endl;
	 }

}
