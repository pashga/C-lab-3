#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#define N 255

int getMaxWord(char buf[], char word[]){
	int count_char = 0,	c_char = 0;			//count_char - счётчик букв в слове
	int state = 0;							//0-вне слова, 1 - внутри слова
	int i = 0, count = 0;					//count - счётчик слов
	char temp[N] = { 0 };
	
	if (buf[strlen(buf) - 1] == '\n')
		buf[strlen(buf) - 1] = '\0';

	while (buf[i]){
		
		if (buf[i] != ' '){
			temp[c_char] = buf[i];
			c_char++;
			state = 1;
		}
		
		if (buf[i] != ' ' && (buf[i + 1] == ' ' || buf[i + 1] == '\0')){
			state = 0;
			temp[c_char] = '\0';
			if (strlen(temp) >= strlen(word)){
				for (int j = 0; j <= c_char; j++)
					word[j] = temp[j];
				count_char = strlen(word);
			}
			temp[0] = '\0';
			c_char = 0;
		}
		i++;
	}

	return count_char;
}