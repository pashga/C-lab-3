#include <stdio.h>

int getSumInt(int arr[],int N){
    
    int i = 0, sum = 0;
    int start, end; // start - первое отрицательное; end - посленее положительное
    while (arr[i] >= 0)
        i++;
    start = i; // первое отрицательное
    i = N - 1;
    while (arr[i] <= 0)
        i--;
    end = i; // первое положительное
    for (i = start+1; i <= end-1; i++)
        sum += arr[i];
    return sum;
}
