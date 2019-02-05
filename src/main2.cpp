#include <stdio.h>
#define N 256

int main()
{

    char str[N];
    printf("Ведите строку, а я расположу слова из неё в столбик: \n");
    fgets(str, N, stdin);

    int i = 0, chcounter = 0, spacecounter;

    while(str[i])
    {
        if(str[i] != ' ') // идём по куску строки (слову), пока не уткнёмся в пробел
        {
            putchar(str[i]);
            spacecounter = 0;    //счётчик пробелов пока обнулён
            chcounter++;        //считаем символы в слове
        }
        else
        {
            if(spacecounter == 0)
            printf("%2d \n", chcounter);
            chcounter = 0;                  //обнуляем счётчик символов предыдущего слова, чтобы посчитать символы в следующем
            spacecounter++;
        }
        i++;
    }
    printf("%2d \n", chcounter - 1);    //вычитаем символ конца строки
    return 0;
}
