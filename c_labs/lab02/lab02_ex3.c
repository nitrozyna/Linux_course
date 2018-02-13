// Finding square free numbers: Malgorzata Kurkiewicz; 2145411k
#include <stdio.h>
#include <stdbool.h>

int main(void){

    int i;
    int n; //input number from the user
    int notSqFree; //notSqFree = 1 mean the number is not Squarefree, notSqFree = 0 mean the number is Squarefree
    int input = 'Y'; // variable to check if the user wants to continue inputing numbers

    while(true) {
        if (input != 'Y') { // when user inputs anything apart from 'Y', program terminates
            break;
        }
        notSqFree=0;
        i=1;
        printf("Enter an integer \n");
        scanf("%d", &n); // reading input from the user

        do {
            i++;
            if (n % (i * i) == 0) {
                printf("Not Squarefree\n");
                notSqFree = 1;
            }

        } while (((i * i) < n) && (notSqFree == 0)); //keep looking for the squared divisors

        if (!notSqFree) { // checking for the reason why (i*i>=n or not squarefree)
            printf("Squarefree\n");
        }
        printf("Another test?\n");
        // getting input from the user
        input = getchar();
        // continue if user inputs 'Y'
        while (input == '\n' || input == EOF){input = getchar();}
    }

}
