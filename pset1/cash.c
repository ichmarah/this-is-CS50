// A program that first asks the user how much change is owed and then prints the minimum number of coins with which that change can be made.
#include <stdio.h>
#include <cs50.h>
#include <math.h> // To make use of the round() method

int main(void)
{
  int owed;
  int cash = 0;

  do
  {
    // Get user input
    owed = round(get_float("Change owed: ") * 100);

  } while (owed < 1);

  // Check which loop applies and keep looping until next loop is needed
  while (owed >= 25)
  {
    cash++;
    owed -= 25;
  }
  while (owed >= 10)
  {
    cash++;
    owed -= 10;
  }
  while (owed >= 5)
  {
    cash++;
    owed -= 5;
  }
  while (owed >= 1)
  {
    cash++;
    owed -= 1;
  }

  printf("%i \n", cash);
}
