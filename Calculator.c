#include <stdio.h>
#include <stdlib.h>

int main() {

  double userinput, input; //creating variables
  char calc;
  int loop = 1;
  int loop2 = 2;

  while (loop < loop2) {

    printf("\n"); //instructing the user
    printf("Please enter an operator to continue. (+, -, *, /) enter 1 to exit");
    printf("\n");
    scanf("%c", &calc);

    if (calc == '1') {
      return 0;
    }

    printf("Please enter your numbers. They should be seperated by a space.");
    printf("\n");
    scanf("%lf %lf", & userinput, & input);

    switch (calc) {

    case '+': //calculation and answer
      printf("\n");
      printf("%lf + %lf = %lf", userinput, input, userinput + input);
      break;

    case '-':
      printf("\n");
      printf("%lf - %lf = %lf", userinput, input, userinput - input);
      break;

    case '*':
      printf("\n");
      printf("%lf * %lf = %lf", userinput, input, userinput * input);
      break;

    case '/':
      printf("\n");
      printf("%lf / %lf = %lf", userinput, input, userinput / input);
      break;

    case '1':
    printf("test");
    return 0;

    default:
      printf("Error: You did not enter valid operands");
      break;

    }

  }

  return 0;
}
