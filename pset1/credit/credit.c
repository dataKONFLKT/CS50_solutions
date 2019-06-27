#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    // Get credit card number from user
    long creditnumber = get_long("Input credit card number: ");
    
    // Declare 1 long for counting purposes and 2 ints for check sum
    long number = creditnumber;
    int checksum = 0, digit = 0;
    
    // Start with FIRST while LOOP, where 'every second' digit 'starting from 2nd digit' is multiplied by 2 and added to checksum
    
    // Firstly move 1 digit left
    number = number / 10;
    do
    {   
        // Get digit with modulo, multiply and add it to checksum
        digit = number % 10;
        checksum = checksum + ((digit * 2) % 10) + ((digit * 2) / 10);
        //printf("%ld, %i\n", number, checksum);
        // Move two digits left
        number = number / 100;
    }
    while (number > 0);

    // Reset number
    number = creditnumber;
    //Then do SECOND while LOOP, where 'every second' digit 'starting from 1st digit' is added to checksum
    do
    {
        // Get digit with modulo and add it to checksum
        digit = number % 10;
        checksum = checksum + digit;
        //printf("%ld, %i\n", number, checksum);
        // Move two digits left
        number = number / 100;
    }
    while (number > 0);

    //Check sum
    if (checksum % 10 == 0)
    {
        if (creditnumber / 10000000000000 == 34 || creditnumber / 10000000000000 == 37) {printf("AMEX\n"); }
        else if (creditnumber / 100000000000000 >= 51 && creditnumber / 100000000000000 <= 55) {printf("MASTERCARD\n"); }
        else if (creditnumber / 1000000000000 == 4 || creditnumber / 1000000000000000 == 4) {printf("VISA\n"); } 
        else { printf("INVALID\n"); }
    }
    else { printf("INVALID\n"); }
}