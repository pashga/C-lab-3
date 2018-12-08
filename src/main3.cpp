#include <stdio.h>
#include "task3.h"

int main(void)
{
	char buf[300],word[300];
	int ans;
	scanf("%[^\n]s", buf);
	ans = getMaxWord(buf, word);
	printf("%s %d", word, ans);
	return 0;
}