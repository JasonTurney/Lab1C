#include <stdio.h>
#include <readline/readline.h>

int main(void) 
{
  float celsius, fahrenheit;
  char *celsius = readline("Enter temperature in celsius: ");
  fahrenheit = (celsius * 9 / 5) + 32;
  printf("%.2f Celsius = %.2f Fahrenheit", celsius, fahrenheit);
  return 0;
}