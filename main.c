#include <stdio.h>
#include "demo.h"

int main() {
    say_hello();

    int result_mul = multiply(5, 3);   // Nouveau appel
    printf("5 * 3 = %d\n", result_mul);

   

    return 0;
}