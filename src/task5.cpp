#include <stdio.h>

int getSumInt(int arr[],int N){
    int flag = 0; // 0 - число < 0 / 1 - число > 0
    int i = 0, sum = 0;
    for(i = 0; i<N; i++){
        if(arr[i] > 0)
            flag = 1;
        if(arr[i] < 0)
            flag = 0;
        if(i != 0 && flag == 1){
            sum = sum + arr[i] + arr[i-1];
            flag = 0;
        }
    }
    return sum;
}
