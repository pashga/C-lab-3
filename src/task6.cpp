#include <stdio.h>
int getSumMaxMin(int arr[],int N){
    int sum = 0; // искомая сумма
    int min, max; // минимальное и максимальное значение в массиве
    int numberMin = 0, numberMax = 0; // порядковый номер максимального и минимального значения в массиве
    min = max = arr[0]; // присваиваем min и max значение первого элемента массива
    for(int i = 0; i < N; i++){ // поиск минимального и максимального значения внутри массива
        if(max < arr[i])
            max = arr[i];
        if(min > arr[i])
            min = arr[i];
    }
    while(arr[numberMax] != max) // поиск положения максимального значения внутри массива
        numberMax++;
    while(arr[numberMin] != min) // поиск положения минимального значения внутри массива
        numberMin++;
    if(numberMin<numberMax){ // если минимальное значение находится раньше максимального
        for(;numberMin<numberMax-1;numberMin++)
            sum = sum + arr[numberMin+1];
    }
    if(numberMax<numberMin){ // если максимальное значение расположено раньше минимального
        for(;numberMax<numberMin-1;numberMax++)
            sum = sum + arr[numberMax+1];
    }
    /*Вычитаем и добавляем 1, чтобы суммировались только те числа, которые находятся между минимальным и максимальным значениями*/
    return sum;
    }

