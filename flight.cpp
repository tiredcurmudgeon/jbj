#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
class Flight
{
	int Flightno;
	char Destination[25];
	float Distance;
	float Fuel;
	public:
		void Feed_info()
		{
			cout<<"\n enter flight number: ";
			cin>>Flightno;
      cin.ignore();
			cout<<"\n enter Destination: ";
			gets(Destination);

			cout<<"\n Distance covered: ";
			cin>>Distance;
			if(Distance<=1000) Fuel=500;
			else if(Distance>1000 &&Distance<=2000)
				Fuel=1100;
			else if(Distance>2000)
				Fuel=2200;
		}
		void Show_info()
		{
			cout<<"flight number is : "<<Flightno;
      cout<<"\ndestination is : "<<Destination;
      cout<<"\ndistance covered is : "<<Distance;
      cout<<"\nfuel required is : "<<Fuel;
		}

}fl;
int main()
{
	ofstream fout("flight.dat",ios::app|ios::binary);
	ifstream fin("flight.dat",ios::in|ios::binary);
	char ans='y';
	while(ans=='y'||ans=='Y')
	{
		int ch;
		cout<<"\n          MAIN MENU        ";
		cout<<"\n 1]  add a record";
		cout<<"\n 2]  display all the records";
		cout<<"\n Enter your choice";
    cin>>ch;
    switch(ch)
		{
			case 1:
				fl.Feed_info();
				fout.write((char*)&fl,sizeof(fl));
				cout<<"\n RECORD ADDED TO FILE";
				break;
			case 2:
				while(!fin.eof())
				{
          fin.read((char*)&fl,sizeof(fl));
					fl.Show_info();
				}
				break;
			default:
				cout<<"\n Wrong choice......Try again!";
				break;
		}
		cout<<"\n Do you want to continue?";
		cin>>ans;
	}
	fout.close();
	fin.close();
  return 0;
}
