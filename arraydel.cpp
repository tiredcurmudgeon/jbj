#include<iostream>
#include<string.h>

using namespace std;

#define size 10

class Myarray
{
	int a[size];
	int n;
	public:
	void readArray();
	void printArray();
	int delelem(int );
};

void Myarray::readArray()
{

	  cout<<" how many elements   ";
	  cin>>n;
	  for(int i=0;i<n;i++)
		cin>>a[i];

}

void Myarray::printArray()
{
	  cout<<"\n";
	  for(int i=0;i<n;i++)
		cout<<a[i]<<" ";

}

int Myarray::delelem(int e)
{
  int found=0;
  for(int i = 0; i < n; i++)
  {
    if(a[i]==e)
    {
     found=1;
     a[i]=a[i+1];
     n--;
    }
  }
  if(!found)
  cout<<"element not found\n";
}

int main()
{
  int pos=0;
  int num=0;
	Myarray d;
	int ch;

	do
	{

    cout<<"\n MAIN MENU";
		cout<<"\n 1.	enter array";
		cout<<"\n 2.	display numbers";
		cout<<"\n 3.	delete the required element from the list";
      cout<<"\n 4.	quit";
		cout<<"\n\n enter your choice (1-4)   ";
		cin>>ch;

		switch(ch)
		{
			case 1:	d.readArray();
						break;
			case 2:	d.printArray();
						break;
			case 3:	cout<<"enter the element to be deleted\n";
          cin>>num;
          d.delelem(num);
            break;
			case 4:	exit(0);
			default:	cout<<"wrong choice";
		}
	}while(ch != 4);


  return 0;
}
