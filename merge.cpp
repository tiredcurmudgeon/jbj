#include<iostream>
using namespace std;

#define size 10
#define sizec 20

class Merge
{
private:
  int a[size];
  int b[size];
  int c[sizec];
  int m;
  int n;

public:
  void getarray1();
  void getarray2();
  void merge();
  void getdetails();
  void showresarray();
};

void Merge::getarray1()
{
  cout<<"enter the number of elements to be added in array 1 : ";
  cin>>m;
  cout<<"enter ascending sorted array only!"<<endl;

  for(int i = 0; i < m; i++)
  {
    cin>>a[i];
  }
}

void Merge::getarray2()

{

  cout<<"enter the enumber of elements to be added in array 2 : ";
  cin>>n;
  cout<<"enter descending sorted array only!"<<endl;
  for(int i = 0; i < n; i++)
  {
    cin>>a[i];
  }
}

void Merge::merge()
{
  int i = 0;
  int j = n - 1 ;
  int k = 0;


  while(i <=m-1 && j >= 0)
  {
    if(a[i] < b[j])
    {
      c[k++] = a[i++];
    }
    else
    {
      c[k++] = b[j--];
    }
  }


  while(i <=m-1)
  {
    c[k++] = a[i++];
  }



  while(j >= 0)
  {
    c[k++] = b[j--];
  }

}


void Merge::showresarray()
{
  cout<<"the resultant array is : ";
  for(int i = 0; i < m+n; i++)
  {
    cout<<c[i]<<" ";
  }
}

int main()
{
  Merge m;
  int ch;

	do
	{

    cout<<"\n MAIN MENU";
		cout<<"\n 1.	enter array 1";
    cout<<"\n 2.	enter array 2";
    cout<<"\n 3.	merge the two arrays";
    cout<<"\n 4.	display the third array";
      cout<<"\n 4.	quit";
		cout<<"\n\n enter your choice (1-4)   ";
		cin>>ch;

		switch(ch)
		{
			case 1:	m.getarray1();
						break;
			case 2:	m.getarray2();
						break;
			case 3:	m.merge();
						break;
      case 4: m.showresarray();
            break;
      case 5:	exit(0);
			default:	cout<<"wrong choice";
		}
	}while(ch != 5);

  return 0;
}
