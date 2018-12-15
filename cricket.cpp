#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

class cricket
{
  long runsmade;
  int number_of_fours,number_of_sixes;
  char firstname[20];
  char lastname[20];

public:
  cricket();
  void get();
  void update(int );
  void display();
}c;
cricket::cricket()
{
  strcpy(firstname,"notdefined");
  strcpy(lastname,"notdefined");
  number_of_fours=0;
  number_of_sixes=0;
  runsmade=0;
}
void cricket::get()
{cin.ignore();

    cout<<"enter the name of the batsman : ";
    gets(firstname);

    cout<<"\nenter the last name of batsman : ";
    gets(lastname);
    cout<<"\nenter the runs scored  : ";
    cin>>runsmade;
    cout<<"\ntotal number of sixes hit are : ";
    cin>>number_of_sixes;
    cout<<"\ntotal number of fours hit are : ";
    cin>>number_of_fours;


}
void cricket::update(int runs)
{
      runsmade=runsmade+runs;
}

void cricket::display()
{
  cout<<"first name of the cricketer is : "<<firstname;
  cout<<"\nlast name of the cricketer is : "<<lastname;
  cout<<"\nruns scored are  : "<<runsmade;
  cout<<"\ntotal number of sixes are : "<<number_of_sixes;
  cout<<"\ntotal number of fours are : "<<number_of_fours;
}

int main()
{
  int runs;

  ofstream fout("cricket.dat",ios::app|ios::binary);
  ifstream fin("cricket.dat",ios::in|ios::binary);
  char ans='y';
  do{
    int ch;
    cout<<"\n          MAIN MENU        ";
    cout<<"\n 1]  add a batsman record";
    cout<<"\n 2]  update runs";
    cout<<"\n 3]  display all records";
    cout<<"\n Enter your choice";
    cin>>ch;
    switch(ch)
      {
      case 1:
      c.get();
      fout.write((char*)&c,sizeof(c));
      break;

      case 2:
            cout<<"enter the runs hit in the match\n";
            cin>>runs;
            c.update(runs);
            break;

      case 3:
            while(!fin.eof())
            {
              fin.read((char*)&c,sizeof(c));
            c.display();}
            break;
      default:
        cout<<"\n Wrong choice......Try again!";
        break;
    }
    cout<<"\n Do you want to continue?";
    cin>>ans;
  }  while(ans=='y'||ans=='Y');

  fout.close();
  fin.close();
  return 0;
}
