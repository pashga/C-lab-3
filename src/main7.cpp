#include <stdio.h>
#include <string.h>
#define N 256

int main()
{
    char str[N];
    char num[128] = {0}; // массив для заполнения цифрами частотности

    printf("Enter a string: \n");
    fgets(str, N, stdin);
    int i, count = 1;
    int line = strlen(str);

    for (i = 0; i < line - 1; i++) // бежим по строке и
        num[str[i]]++;            // считаем сколько раз встречается кажды сивол

    for (i = 0; i < 128; i++) // определем самый частотный символ
    {
        if(num[i] >= count) // сортируем
            count = num[i];
    }

    while(count != 0)
    {
        for (i = 0; i < 128; i++) // перебираем все символы и сравниваем с count
        {
            if(num[i] == count)
                printf("%c %d \n", i, count);
        }
        count--;
    }
    return 0;
}


