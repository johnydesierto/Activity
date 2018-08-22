#include <iostream>
using namespace std;

void main ()
{

	int arr[50], position, c, number;

	cout<<"ENTER NUMBER OF ELEMENTS: ";
	cin>>number;

	cout<<"ENTER " <<number <<" NUMBERS: ";
	for(c=0; c<number; c++)
		cin>>arr[c];

	cout<<"ENTER THE LOCATION: ";
	cin>>position;
	
	for(c=position-1; c<number-1; c++)
	arr[c]=arr[c+1];

	cout<<"THE RESULT ARE: \n\n";
	for(c=0; c<number-1; c++)
	cout<<arr[c]<<" ";

	
	cout<<"\n\n";
	system("pause");
}


