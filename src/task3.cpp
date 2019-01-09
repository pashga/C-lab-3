#include <stdio.h>
int getMaxWord(char buf[],char word[]){
    
    char maxWord[256];
    int count = 0, max = 0;
    
    for(int i = 0; buf[i] != '\n'; i++){
        if(buf[i] != ' '){
            maxWord[count] = buf[i];
            count++;
                if (count > max){
                    max = count;
                        for(int j = 0; j < max; j++)
                            word[j] = maxWord[j];
                                }
        }
        if(buf[i] == ' '){
            count = 0;
        }
    }
    return max;
}
