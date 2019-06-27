/******************************
 * I believe this code doesn't need any explanation :)
 * Everything was shown during the Week one lecture, if You still missed it, go watch it!
 ******************************/

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name = get_string("What is your name?\n");
    printf("hello, %s\n", name);
}
