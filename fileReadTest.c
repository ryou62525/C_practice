#include <stdio.h>

int main()
{
	FILE* fp;
	int num;
	char str[81];
	double f;

	fp = fopen("test.txt", "r");
	if(fp == NULL)
	{
		puts("test.txt���J���܂���");
		return 1;
	}

	fscanf(fp, "%d %80s %f", &num, str, &f);

	printf("%d %s %f\n", num, str, f);

	fclose(fp);

	return 0;

}