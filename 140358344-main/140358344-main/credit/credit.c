#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long cc_number = get_long("Number: ");
    int i = 0;
    int digits[16];
    while (cc_number > 0)
    {
        int digit = cc_number % 10;
        digits[i] = digit;
        i++;
        cc_number = cc_number / 10;

    }

    int j = i / 2;
    int a=0;
    int twos = 1;
    int twoproduct = 0;
    int twodigit[16];
    int twosum = 0;

    for (int c = 0;c < j;c++)
    {
        twoproduct = digits[twos] * 2;
        twodigit[a] = twoproduct % 10;
        a = a + 1;
        twodigit[a] = twoproduct / 10;
        twosum = twosum + twodigit[a] + twodigit[a-1];
        a = a + 1;
        twos = twos + 2;
    }

    int sum = twosum;
    int other = 0;
    sum = sum + digits[other];

    for (int c = 0;c < j;c++)
    {
        other = other + 2;
        sum = sum + digits[other];
    }

    int card = 0;

    if (sum % 10 != 0)
    {
        printf("INVALID\n");
    }
        else
        {
            if (digits[i-1]==3&&(digits[i-2]==4||digits[i-2]==7))
            {
                card=1;
            }
            else if (digits[i-1]==5&&(digits[i-2]==1||digits[i-2]==2||digits[i-1]==3||digits[i-1]==4||digits[i-1]==5))
            {
                card=2;
            }
            else if (digits[i-1]==4)
            {
                card=3;
            }

            switch(card)
            {
                case 1:
                    printf("AMEX\n");
                    break;
                case 2:
                    printf("MASTERCARD\n");
                    break;
                case 3:
                    printf("VISA\n");
                    break;
                default:
                    printf("INVALID\n");
                    break;
            }
        }

}