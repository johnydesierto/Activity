#include<iostream>
using namespace std;


void main()
{


	int number[50];
	int val,location,count;
	int a;
	cout<<"Enter 5 numbers: \n";
	for(a=0;a<5;a++)
	{
		cin>>number[a];
	}
	do
	{
	cout<<"\n\n";
	cout<<"Input the location to insert a number: ";
	cin>>location;
	cout<<"\n";
	cout<<"What value you want to insert: ";
	cin>>val;
	count=a;
	
	cout<<"\n\n";
	for(a=count; a>=location ;a--)
		number[a+1]=number[a];
		number[location]=val;
		
		
		
	for( a=0;a<=count;a++)
		{ 
			cout<<number[a];
			cout<<"  ";
		}
}
	while(a<10);

system("pause");
}