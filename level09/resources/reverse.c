#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int ac, char **av)
{
	if (ac != 2) { printf("ERROR: nb arguments\n"); return 1; }
	
	FILE *fptr = fopen(av[1], "r");
	if (!fptr) { printf("ERROR: read file\n"); return 1; }

	char buff[255];
	fgets(buff, 255, (FILE*)fptr); 

	size_t i = 0;
	for (; i < strlen(buff) - 1; i++) {
		buff[i] = buff[i] - i;
	}
	buff[i] = '\0';

	printf("%s\n", buff);
	
	fclose(fptr);
	
	return 0;
}
