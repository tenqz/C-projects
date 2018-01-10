#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char ** argv)
{
	char * value;
	if (argc < 2)
	{
		fprintf(stderr, "\n Usage myenv2 <variable>");
		return 1;
	}
	value = (char*) getenv(argv[1]);
	if (value == NULL)
	{
		printf ("%s not found\n", argv[1]);
	} else {
		printf ("%s=%s\n", argv[1], value);
	}
	return 0;
}