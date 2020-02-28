#include "sample1.h"
#include <stdio.h>

int main(int argc, char** argv)
{
    int n = 5;

    printf("%d の階乗は %d です\n", n, Factorial(n));
    if (IsPrime(n)) printf("%d は素数です\n", n);
    else printf("%d は素数ではありません\n", n);
}
