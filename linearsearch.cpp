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
	int linearsearch(int );
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

int Myarray::linearsearch(int e)
{
  for(int i = 0; i < n; i++)
  {
    if(e == a[i])
    return i+1;
  }
   return -1;
}

int main()
{
  int pos=0;
  int num=0;
	Myarray ls;
	int ch;

	do
	{

    cout<<"\n MAIN MENU";
		cout<<"\n 1.	enter array";
		cout<<"\n 2.	display numbers";
		cout<<"\n 3.	find position of required element in the list";
      cout<<"\n 4.	quit";
		cout<<"\n\n enter your choice (1-4)   ";
		cin>>ch;

		switch(ch)
		{
			case 1:	ls.readArray();
						break;
			case 2:	ls.printArray();
						break;
			case 3:	cout<<"enter the element to be searched\n";
        cin>>num;
        pos =  ls.linearsearch(num);
        if(pos== -1)
        cout<<"element not found\n";
        else
        cout<<pos;
					break;
			case 4:	exit(0);
			default:	cout<<"wrong choice";
		}
	}while(ch != 4);


  return 0;
}
