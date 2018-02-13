// Simple calculator: Malgorzata Kurkiewicz, 2145411k
#include <stdio.h>

int main(void){
    char op;
    double x,y;

    printf("Enter an operator:\n");
    scanf("%c", &op);
    printf("Enter two numbers:\n");
    scanf("%lf %lf",&x, &y);

// given two numbers and a sign, we are going to peform:
    switch(op){
      case '+':
          printf("%.1lf + %.1lf = %.1lf\n",x,y, x + y); // addition
          break;
      case'-':
          printf("%.1lf - %.1lf = %.1lf\n",x,y, x - y); // subtraction
          break;
      case '*':
          printf("%.1lf * %.1lf = %.1lf\n",x,y, x * y); // multiplication
          break;
      case '/':
          printf("%.1lf / %.1lf = %.1lf\n",x,y, x / y); // division
          break;
      default: // in case user types in something else than +,-,* or /
        printf("Sorry, you entered an invalid sigh. \n");

      }
      return 0;
}
