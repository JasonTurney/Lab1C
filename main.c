// Author: Jason Turney jnt5211@psu.edu
// Collaborator: Sam Snavely sjs7082@psu.edu
// Collaborator: Rasha Almutairi rea5285@psu.edu

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) 
{
  char *temperature = readline("Enter temperature in celsius: ");
  double celsius = atof(temperature);
  double fahrenheit = (celsius*9/5+32);
  printf("%f° in Celsius is equivalent to %f° Fahrenheit.\n",celsius, fahrenheit);
  return 0;
}