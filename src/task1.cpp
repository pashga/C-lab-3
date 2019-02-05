#include <string.h>

int wordCount(char buf[])

{
    int i = 0, wordCount = 0;
    int state = 0; // 0 - вне слова, 1 - внутри слова

    if (buf[strlen(buf) - 1] == '\n')
        buf[strlen(buf) - 1] = '\0';

    while (buf[i])
    {
        if (buf[i] !=' ' && state == 0) //если символ не пробел и статус "вне слова", значит мы наткнулись на следующее слово
        {
            state = 1;                 //потому меняем статус на "внутри слова"
            wordCount++;              //и увеличиваем счётчик слов на единицу
        }

        else if(buf[i] == ' ' && state == 1)
            state = 0;
        i++;
    }

    return wordCount;
}
