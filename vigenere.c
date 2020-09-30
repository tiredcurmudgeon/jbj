//Program to cipher the text
//Priyansh Bordia
//13-10-19
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int shift(char c);

int main(int argc, string argv[])
{
    int a, p;

    string  s = argv[1];

    if ((argv[2] = "\0"))
    {
        string p_text = get_string("plaintext:  ");
        printf("ciphertext: ");

        int keyword = 0;

        for (int  i = 0; i < strlen(p_text); i++)
        {
            p = (int)p_text[i];

// if the counter points to the last letter of the key then redirect it to start

                if (keyword > strlen(s) - 1)
                	keyword = 0;

                int key = shift(argv[1][keyword]);
                int k = key;

// checking for the case of the text through iteration

                if (p > 64 && p < 91)
                {
                    p = (p - 65)%26 ;
                    a = (k + p)%26 + 65;
                    keyword ++;
                }

                else if (p > 96 && p < 123)
                {
                    p = (p - 97)%26 ;
                    a = (p + k)%26 + 97;
                    keyword ++;
                }
		        else
		            a = p;
		        printf("%c", a);
        }
        printf("\n");
        return 0;
     }
     else
     {
          printf("Usage: ./vigenere keyword\n");
          return 1;
     }
}
int shift(char c)
{
    int x = (int)c;
    if ( x > 64 && x < 91)
    {
        x = x - 65;
    }
    else if (x > 96 && x < 123)
    {
        x = x - 97;
    }
    return x;
}




