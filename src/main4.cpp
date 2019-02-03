#include <stdio.h>
#include "task4.h"

int main(void)
{
	char buf[300];
	scanf("%[^\n]s", buf);
	printf("%d\n", getSum(buf));
	return 0;
}