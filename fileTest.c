#define _CRT_SECURE_NO_DEPRECATE 1  /* VisualC++2005 での警告抑制 */
#include <stdio.h>

int main(void)
{
	FILE *fp;
	
	fp = fopen( "test.txt", "w" );
	if( fp == NULL )
	{
		puts( "test.txtが開けません" );
		return 1;
	}
	
	/* 10 + 20 = 30です　と書き込む */
	fprintf( fp, "%d %c %d = %d%s\n", 10, '+', 20, 10+20, "です" );

	fclose( fp );
	return 0;
}