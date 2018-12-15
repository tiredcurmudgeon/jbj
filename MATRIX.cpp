#include<iostream>

using namespace std;

#define size 5

class matrix
{
	int a[size][size];
	int m,n;

	public:
		matrix();

		void get();
		void show();
		void diagnol();
		void upper();
		void lower();

	};

	matrix::matrix()
	{
	m=0; n=0;
	}


	void matrix::get()
	{
	  int i,j;
	  cout<<" enter no of rows and  columns respectively  ";
	  cin>>m>>n;
	  for(i=0;i<m;i++)
		 {
			 for(j=0;j<n;j++)
				{
				  cout<< " enter element   ";
				  cin>>a[i][j];
				}
		 }

	}


	void matrix::show()
	{
	  int i,j;
	  for(i=0;i<m;i++)
		 {
			 for(j=0;j<n;j++)
				{
					cout<<a[i][j]<<"\t";
				}
			cout<<"\n";
		 }
	}

	void matrix::diagnol()
	{
	  int i,j;

	  cout<<"the diagonal elements are: \n";
	  for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
      {
        if(i==j)
        cout<<a[i][i]<<"\t";
      }
    }
    cout<<"\n";


	 }

	void matrix::upper()
	{

		  int i,j;
		  cout<<" upper triangular matrix is    ";

	  for( i = 0 ;i < m ; i++ )
		 {
			 for(j = 0 ; j < n ; j++)
				{
				  if((i+j)<n)
				  cout<<a[i][j]<<"\t";
				}
		  }
      cout<<"\n";
		}

	 void matrix::lower()
	{

		  int i,j;
		  cout<<" lower triangular matrix is    ";

	  for( i = 0 ; i < m ; i++ )
		 {

			 for(j=0;j<n;j++)
				{
				  if((i+j)>=(n-1))
				  cout<<a[i][j]<<"\t";
				}
		  }
      cout<<"\n";
		}

    int main()
  			{
  			 matrix M;
  			 int ch;

  			 do
  			 {

  			  cout<<"  1. enter matrix \n" ;
  			  cout<<"  2. display matrix\n" ;
  			  cout<<"  3. show diagnol\n" ;
  			  cout<<"  4. show upper triangle\n" ;
  			  cout<<"  5. show lower triangle\n" ;
  			  cout<<"  0. exit\n" ;
  			  cout<<" enter choice   ";
  			  cin>>ch;

  			  switch(ch)
  			  {
  			  case 1: M.get();
  						break;

  			 case 2: M.show();
  						break;

  			 case 3: M.diagnol();
  						break;

  			 case 4: M.upper();
  						break;

  			 case 5: M.lower();
  						break;

        case 0: exit(0);

  			}
      }while(ch!=0);
      return 0;
   }
