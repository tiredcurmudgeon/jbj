#include<iostream>
#include<string.h>

using namespace std;

#define size 10

class selecsort
{
	int a[size];
	int n;
	public:
	void readArray();
	void printArray();
	void sort();
};

void selecsort::readArray()
{

	  cout<<" how many elements   ";
	  cin>>n;
	  for(int i=0;i<n;i++)
		cin>>a[i];

}

void selecsort::printArray()
{
	  cout<<"\n";
	  for(int i=0;i<n;i++)
		cout<<a[i]<<" ";

}

void selecsort::sort()
{
  for(int pass = 1; pass < n; pass++)
  {

    for(int j = 0; j < n - pass; j++)
    {
      if(a[j] > a[j+1])
      {
        swap(a[j], a[j+1]);
      }
    }
  }

}

int main()
{

	selecsort s;
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
			case 1:	s.readArray();
						break;
			case 2:	s.printArray();
						break;
			case 3:	s.sort();
						break;
			case 4:	exit(0);
			default:	cout<<"wrong choice";
		}
	}while(ch != 4);


  return 0;
}
