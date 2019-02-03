#include <stdio.h>
#include <string.h>
#include "task1.h"

int main(void)
{
	char buf[200];
	scanf("%[^\n]s", buf);
	printf("%d", wordCount(buf));

	return 0;
}
