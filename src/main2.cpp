/*	Написать программу, которая для введённой строки определяет количество
слов и выводит каждое слово на отдельной строке и его длину */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define N 256

int main(){
	char str[N];
	int i = 0, count = 0, count_char = 0;			//count - счётчик слов, count_char - счётчик букв в слове
	int state = 0;									//0-вне слова, 1 - внутри слова.
	
	printf("Enter a string: ");
	fgets(str, N, stdin);
	if (str[strlen(str) - 1] == '\n')
		str[strlen(str) - 1] = '\0';

	while (str[i]){
		/*___________________Print word.____________________*/
		if (str[i] != ' '){
			printf("%c", str[i]);
			count_char++;
		}
		/*____________Check the end of the word.____________*/
		if (str[i] != ' ' && state == 0){
			state = 1;
			count++;
		}
		if (str[i] == ' ' && state == 1)
			state = 0;
		/*______Print the number of letters in a word.______*/
		if (str[i] != ' ' && (str[i+1] == ' ' || str[i+1] == '\0') && count >= 1){
			printf("\t\tcount symbol = %d\n", count_char);
			count_char = 0;
		}
		i++;
	}
	printf("count words = %d\n", count);
	return 0;
}