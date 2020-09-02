#include <stdio.h>
#include <readline/readline.h>

int main(void) {
  char *celsius = readline("Enter temperature in celsius: ");
  atof(celsius);
  fahrenheit = (celsius * 9 / 5) + 32;
  printf("%.2f Celsius = %.2f Fahrenheit", celsius, fahrenheit);
  return 0;
}