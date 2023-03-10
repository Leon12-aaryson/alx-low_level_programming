#include <stdio.h>
#include <string.h>

int main(void)
{
	char *haystack = "This is me";
	char *needle = "is";
	char *t;

	t = strstr(haystack, needle);

	printf("%s", t);

	return 0;
}

