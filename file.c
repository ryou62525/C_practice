#include <stdio.h>

FILE* file;
char a[] = "Hello";

int main()
{

	char text[256];
	file = fopen("file_test.txt", "r");
	
	fprintf(file, "%s",);


	fclose(file);

	return 0;
}