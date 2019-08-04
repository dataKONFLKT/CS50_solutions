/******************************
 * 
 *  cash.c
 *  
 *  DataKonflkt
 *  Harvard Computer Science 50
 *  Week one Problem Set
 *
 *  Prints out number of coins needed to give change back
 *
 ******************************/

#include <stdio.h>
#include <math.h>
#include <cs50.h>

int main(void)
{
    // Initialize counter float 'money_float', and counter for each coin
    float money_float = 0;
    int quarter = 0, dime = 0, nickel = 0, penny = 0;
    
    // Ask user for ammount that he owe, until he gives positive float number
    do
    {
        money_float = get_float("How much do you owe?\n");
    }
    while (money_float <= 0);
        
    // Convert float to int
    int money = round( money_float * 100 );

    // Proceed with 'for loops' where an ammount of each coin is subtracted from the input, and the counter of each coin increases
    for (;money >= 25;) { money = money - 25; quarter++;}
    
    for (;money >= 10;) { money = money - 10; dime++;}
    
    for (;money >= 5;) { money = money - 5; nickel++;}
    
    for (;money >= 1 || money >0;) { money = money - 1; penny++;}
    
    // Sum up coin numbers and print the result
    int sum = quarter + dime + nickel + penny;
    printf("%i\n", sum);
}