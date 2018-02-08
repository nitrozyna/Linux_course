#include <stdio.h>

int main(void){
    char op;
    double x,y;

    printf("Enter an operator:\n");
    scanf("%c", &op);
    printf("Enter two numbers:\n");
    scanf("%lf %lf",&x, &y);

    switch(op){
      case '+':
          printf("%.1lf + %.1lf = %.1lf\n",x,y, x + y);
          break;
      case'-':
          printf("%.1lf - %.1lf = %.1lf\n",x,y, x - y);
          break;
      case '*':
          printf("%.1lf * %.1lf = %.1lf\n",x,y, x * y);
          break;
      case '/':
          printf("%.1lf / %.1lf = %.1lf\n",x,y, x / y);
          break;
      default:
        printf("Sorry, you entered an invalid sigh. \n");

      }
      return 0;
}
