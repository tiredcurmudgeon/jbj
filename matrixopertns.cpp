#include<iostream>
using namespace std;

#define size 4

class matrix
{
  int a[size][size];
  int b[size][size];

public:
  void addition();
  void subtraction();
  void multiply();
  void getmat1();
  void getmat2();
  void showmat1();
  void showmat2();
};

void matrix::addition()
{
  int c[size][size];

  for(int i = 0; i < size-1; i++)
  {
    for(int j = 0; j < size-1; j++)
    {
      c[i][j]=a[i][j]+b[i][j];
    }
  }

  for(int i = 0; i < size-1; i++)
  {
    for(int j = 0; j < size-1; j++)
    {
    cout<<c[i][j]<<" ";
    }
  }
}

void matrix::subtraction()
{
  int c[size][size];

  for(int i = 0; i < size-1; i++)
  {
    for(int j = 0; j < size-1; j++)
    {
      c[i][j]=a[i][j]-b[i][j];
    }
  }
  for(int i = 0; i < size-1; i++)
  {
    for(int j = 0; j < size-1; j++)
    {
    cout<<c[i][j]<<" ";
    }
  }

}
void matrix::getmat1()
{
  for(int i = 0; i < size-1; i++)
  {
    for(int j = 0; j < size-1; j++)
    {
    cin>>a[i][j];
    }
  }
}
void matrix::getmat2()
{
  for(int i = 0; i < size-1; i++)
  {
    for(int j = 0; j < size-1; j++)
    {
    cin>>b[i][j];
    }
  }
}
void matrix::showmat1()
{
  for(int i = 0; i < size-1; i++)
  {
    for(int j = 0; j < size-1; j++)
    {
    cout<<a[i][j]<<" ";
    }
  }
}
void matrix::showmat2()
{
  for(int i = 0; i < size-1; i++)
  {
    for(int j = 0; j < size-1; j++)
    {
    cout<<b[i][j]<<" ";
    }
  }
}
void matrix::multiply()
{


}

int main()
{
  matrix m;
  int ch;

  do
  {

    cout<<"\n MAIN MENU";
    cout<<"\n 1.	enter matrix 1";
    cout<<"\n 2.	enter matrix 2";
    cout<<"\n 3.	add the two matrix";
    cout<<"\n 4.	subtract the two matrix";
    cout<<"\n 5.	display matrix 1";
    cout<<"\n 6.	display matrix 2";
      cout<<"\n 7.	quit";
    cout<<"\n\n enter your choice (1-6)   ";
    cin>>ch;

    switch(ch)
    {
      case 1:	m.getmat1();
            break;
      case 2:	m.getmat2();
            break;
      case 3:	m.addition();
            break;
      case 4: m.subtraction();
            break;
      case 5:m.showmat1();
            break;
      case 6:m.showmat2();
            break;
      case 7:	exit(0);
      default:	cout<<"wrong choice";
    }
  }while(ch != 7);

  return 0;
}
