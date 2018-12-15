#include<iostream>

using namespace std;

#define MAX 10

struct student
{
  int roll;
  char name[20];
};

class Stack
{
  int top;
  student data[MAX];

public:
  Stack()
  {
    top=-1;
  }

  void push(student x)
  {
    if(top == MAX)
    cout<<"overflow\n";

    top++;
    data[top] = x;

  }
  void pop()
  {
    if(top == -1)
    {
      cout<<"Underflow\n";
      return;
    }

    top--;
  }
  void display()
  {

    for(int i = top; i >=0 ; i--)
    {
      cout<< data[i].roll<<" - "<< data[i].name;
    }
  }
};

int main()
{
  Stack s;
  student stud;
  int ch;

do
{
  cout<<"\n MAIN MENU";
  cout<<"\n 1.	push elements : ";
  cout<<"\n 2.	pop elements : ";
  cout<<"\n 3.	display elements";
    cout<<"\n 4.	quit";
  cout<<"\n\n enter your choice (1-4)   ";
  cin>>ch;

  switch(ch)
  {
    case 1:	cin.ignore();
    cout<<"enter the name of the student\n";
            cin.getline(stud.name , sizeof(stud.name));
            cout<<"enter the roll number\n";
            cin>>stud.roll;
            s.push(stud);
          break;
    case 2:	s.pop();
          break;
    case 3:	s.display();
          break;
    case 4:	exit(0);
    default:	cout<<"wrong choice";
  }
}while(ch != 4);

  return 0;
}
