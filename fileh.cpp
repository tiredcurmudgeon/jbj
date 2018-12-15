#include<iostream>
#include<fstream>
#include <string.h>

using namespace std;

int isandare(char * word)
{
  if(strcmp(word,"are") == 0 || strcmp(word,"is") == 0)
    return 1;
  else
    return 0;
}

int num()
{
  char word[20];
   int count=0;

  ifstream file;
  file.open("story.txt",ios::in);

  while(file >> word)
  {
    if(isandare(word))
    count++;
  }

file.close();

return count;

}

int main()
{
  cout<<num()<<endl;
}
