#include <stdio.h>
#include "string.h"
#include "task1.h"

#define N 256

int main()

{
	char buf[N];

	printf("Vvedite stroku so slovami\n");
	fgets(buf, N, stdin);

	if (buf[strlen(buf) - 1] == '\n')
		buf[strlen(buf) - 1] = '\0';

	printf("Slov:%d\n", wordCount(buf));

	getchar();

	return 0;

}

