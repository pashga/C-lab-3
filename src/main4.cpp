#include <stdio.h>
#include "task4.h"
#define N 256

int main()
{
    char buf[N];
    printf("Enter a string (mixed symbols and numbers): ");
    fgets(buf, N, stdin);
    printf("Sum = %d \n", getSum(buf));
    return 0;
}
