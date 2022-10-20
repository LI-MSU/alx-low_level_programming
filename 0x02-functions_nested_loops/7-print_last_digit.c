#include "main.h"
/**
 *@number: should be teh base
 *print_last_digit: You shold return the last digit
 *@dig: cool
 */

int print_last_digit(int number)
{
  int dig;
  
  dig = number % 10;
  if (dig < 0)
    {
      _putchar(-dig + '0');
      return (-dig); 
    }
  else
    {
      _putchar(dig + '0');
      return (dig);
      
    }
}
