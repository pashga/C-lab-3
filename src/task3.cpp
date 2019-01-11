int getMaxWord(char buf[],char word[])

{
    int i, j, count, getMaxWord;
    char theLongestWord[128];

    for(i = 0; buf[i] !='\n'; i++)                      //идём по строке пока не дойдём до конца
    {
        if(buf[i] !=' ')                               //идём по куску строки (слову) до пробела
        {
            theLongestWord[count] = buf[i];           //заполняем массив первым самым длинным словом
            count++;
            if (count > getMaxWord)
            {
                getMaxWord = count;                     //определяем длину самого длинного слова
                for(j = 0; j < getMaxWord; j++)
                    word[j] = theLongestWord[j];        //помещаем в массив самое длинное слово
            }
        }
            else                                        //иначе при встрече с пробелом зануляем счётчик
                count = 0;
    }
    return getMaxWord;
}
