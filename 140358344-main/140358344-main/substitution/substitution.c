#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    char alphabet[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
                       'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    if (argc<2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    else if (argc>2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    else if (strlen(argv[1]) != 26)
    {
        printf("Key must contain 26 characters.\n");
        return 1;
    }
    else
    {
        if (argc == 2)
        {
            string plaintext = get_string("plaintext:  ");
            printf("ciphertext: ");
            for (int i = 0, n = strlen(plaintext); i < n; i++)
            {
                int j = 0;
                while (toupper(plaintext[i]) != alphabet[j])
                {
                    j++;
                    if (j > 26)
                    {
                        printf("%c", plaintext[i]);
                        break;
                    }
                }
                if (j <= 26)
                {
                    if (plaintext[i] == toupper(plaintext[i]))
                    {
                        printf("%c", toupper(argv[1][j]));
                    }
                    else
                    {
                        printf("%c", tolower(argv[1][j]));
                    }
                }
            }
            printf("\n");
            return 0;
        }
    }
}
