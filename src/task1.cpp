#include "task1.h"

int wordCount(char buf[]) {
    int count = 0, flag = 0; // count - счетчик слов; flag - индикатор нахождения нас внутри слова (1 - внутри слова; 0 - снаружи)
    for (int i = 0; buf[i] != '\0'; i++){
        if (buf[i] != ' ' && flag == 0)
            flag = 1, count++;
        
        else if (buf[i] == ' ' && flag == 1)
            flag = 0;
    }
    return count;
}

    
