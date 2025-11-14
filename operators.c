//OLEDAN, RAVEN LANCE M. DIT 1-2
#include <stdio.h>

int main (){


    int num1 = 50, num2 = 10;     
    printf("ARITHMETIC\n");
    printf("num1 + num2 = %d\n", num1 + num2);
    printf("num1 - num2 = %d\n",  num1 - num2);
    printf("num1 * num2 = %d\n", num1 * num2);
    printf("num1 / num2 = %d\n\n",  num1 / num2);

    printf("LOGICAL\n");
    printf("num1 < num2 && num1 > num2: %d\n", num1<num2 && num1>num2);
    printf("num1 < num2 || num1 > num2: %d\n", num1<num2 || num1>num2);
    printf("!(num1 < num2 && num1 > num2): %d\n\n", !(num1<num2 && num1>num2));

    num1 += 5;
    num2 *= 5;

    printf("ASSIGNMENT\n");
    printf ("num1 += 5: %d\n", num1);
    printf ("num2 *= 5: %d", num2);

    return 0;

}