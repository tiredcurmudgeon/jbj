#include<iostream>
#include<string.h>

using namespace std;

#define size 10

class insorter
{
	int a[size];
	int n;
	public:
	void readArray();
	void printArray();
	void sort();

};

void insorter::readArray()
{

	  cout<<" how many elements   ";
	  cin>>n;
	  for(int i=0;i<n;i++)
		cin>>a[i];

}

void insorter::printArray()
{
	  cout<<"\n";
	  for(int i=0;i<n;i++)
		cout<<a[i]<<" ";

}

void insorter::sort()
{int temp;
  int j;
  for(int i=1; i<n; i++)
	{
		temp=a[i];
		j=i-1;
		while((temp<a[j]) && (j>=0))
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=temp;
	}

}

int main()
{

	insorter in;
	int ch;

	do
	{

    cout<<"\n MAIN MENU";
		cout<<"\n 1.	enter array";
		cout<<"\n 2.	display numbers";
		cout<<"\n 3.	sort the list";
      cout<<"\n 4.	quit";
		cout<<"\n\n enter your choice (1-4)   ";
		cin>>ch;

		switch(ch)
		{
			case 1:	in.readArray();
						break;
			case 2:	in.printArray();
						break;
			case 3:	in.sort();
						break;
			case 4:	exit(0);
			default:	cout<<"wrong choice";
		}
	}while(ch != 4);


  return 0;
}
