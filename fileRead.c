#define _CRT_SECURE_NO_DEPRECATE 1
#include <stdio.h>

int main(void)
{
	FILE *fp;
	int num;
	char str[81];
	double f;

	fp = fopen("test.txt", "r");
	if(fp == NULL)
	{
		puts("test.txtが開きません");
		return 1;
	}

	fscanf(fp, "%d %80s %f", &num, str, &f);

	printf("%d %s %f\n", num, str, f);

	fclose(fp);

	return 0;
}