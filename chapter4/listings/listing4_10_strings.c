// strings.c - string formatting
#include <stdio.h>

#define BLURB "Authentic Imitation!"

int main(void)
{
	printf("/%2s/\n", BLURB);
	printf("/%24s/\n", BLURB);
	printf("/%24.5s/\n", BLURB);
	printf("/%-24.5s/\n", BLURB);

	return 0;
}
