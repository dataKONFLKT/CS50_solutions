#include <stdio.h>
#include <math.h>
#include <cs50.h>

int main(void)
{
    float money_float = 0;
    int quarter = 0, dime = 0, nickel = 0, penny = 0;
    
    do
    {
        money_float = get_float("How much do you owe? ");
    }
    while (money_float <= 0);
        
    int money = round( money_float * 100 );

    for (;money >= 25;) { money = money - 25; quarter++;}
    
    for (;money >= 10;) { money = money - 10; dime++;}
    
    for (;money >= 5;) { money = money - 5; nickel++;}
    
    for (;money >= 1 || money >0;) { money = money - 1; penny++;}
    
    int sum = quarter + dime + nickel + penny;
    printf("%i\n", sum);
}