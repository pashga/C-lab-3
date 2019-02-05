int getSum(char buf[])

{
    int i = 0, value = 0, sum = 0;
    while(buf[i])
    {
        if (buf[i] >= '0' && buf[i] <= '9')         //если символ с строке цифра
            value = value * 10 + (buf[i] - '0');    //то превращаем его(их) в число
        else
        {
            sum += value;                           //последовательно складываем числа sum = sum + value
            value = 0;
        }
        i++;
    }
    return sum;
}
