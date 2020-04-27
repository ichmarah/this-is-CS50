#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Get name of user
    string name = get_string("What is you name?\n");
    // Print name of user dynamically
    printf("Hello, %s!\n", name);
}