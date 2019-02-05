#include <stdio.h>
#include "task3.h"
#define N 256

int main()
{
    char buf[N], word[N];
    printf("Enter a string: ");
    fgets(buf, N, stdin);
    printf("The longest word: %s %d \n", word, getMaxWord(buf, word));
    return 0;
}
