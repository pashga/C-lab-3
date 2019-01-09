#include <stdio.h>
int getSum(char buf[]){
    int sum = 0; // сумма чисел
    int num = 0; // текущее число
    int i = 0; // счетчик
    
    while(buf[i]){
        if(buf[i] >= '0' && buf[i] <= '9')
            num = num * 10 + (buf[i] - '0'); // вычитаем '0', чтобы работать с индексами таблицы ASCII
        else (sum = sum + num, num = 0);
        i++;
    }
    return sum;
}
