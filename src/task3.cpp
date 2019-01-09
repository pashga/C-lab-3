#include <stdio.h>
int getMaxWord(char buf[],char word[]){
    
    char maxWord[256];
    int count = 0, max = 0;
    
    for(int i = 0; buf[i] != '\n'; i++){
        if(buf[i] != ' '){ // перебор массива до пробела
            maxWord[count] = buf[i]; // в промежуточный массив записываем самое длинное слово из всех встретившихся
            count++;
                if (count > max){
                    max = count; // находим максимальное значение длины слова
                        for(int j = 0; j < max; j++)
                            word[j] = maxWord[j]; // записываем текущее самое дллинное слово
                                }
        }
        if(buf[i] == ' '){ // сбрасываем счетчик при встрече с проелом и начинаем посик слова сначала
            count = 0;
        }
    }
    return max;
}
