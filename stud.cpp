#include<iostream>
#include<fstream>
using namespace std;
class stud
{
	int rno;
	char name[25];
	char cls[4];
	float marks;
	char grade;
	public:
		void getdata()
		{
			cout<<"\n Roll number: ";
			cin>>rno;
			cout<<"\n Name: ";
			cin>>name;
			cout<<"\n Class: ";
			cin>>cls;
			cout<<"\n Marks: ";
			cin>>marks;
			if(marks>=90) grade='A';
			else if(marks>=70);
				grade='B';
			else if(marks>=50);
				grade='C';
			else if(marks>=40);
				grade='D';
			else
				grade='F';
		}
		void putdata()
		{
			cout<<name<<"\t"<<"roll number : "<<rno<<" has "<<marks<<"% marks and "<<grade<<" grade."<<endl;
		}
		int getrno()
		{
			return rno;
		}
}s1;
int main()
{
	ofstream fout("stud.dat",ios::app|ios::binary);
	ifstream fin("stud.dat",ios::in|ios::binary);
	char ans='y';
	while(ans=='y'||ans=='Y')
	{
		int ch;
		cout<<"\n          MAIN MENU        ";
		cout<<"\n 1]  add a record";
		cout<<"\n 2]  display all the records";
		cout<<"\n Enter your choice";
    switch(ch)
		cin>>ch;
		{
			case 1:
				s1.getdata();
				fout.write((char*)&s,sizeof(s)));
				cout<<"\n RECORD ADDED TO FILE";
				break;
			case 2:
				while(!fin.eof())
				{
					fin.read((char*)&s,sizeof(s));
					s.putdata();
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
  return
}
