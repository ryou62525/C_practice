#define _CRT_SECURE_NO_DEPRECATE 1  /* VisualC++2005 ‚Å‚ÌŒx—}§ */
#include <stdio.h>

int main(void)
{
	FILE *fp;
	
	fp = fopen( "test.txt", "w" );
	if( fp == NULL )
	{
		puts( "test.txt‚ªŠJ‚¯‚Ü‚¹‚ñ" );
		return 1;
	}
	
	/* 10 + 20 = 30‚Å‚·@‚Æ‘‚«‚Ş */
	fprintf( fp, "%d %c %d = %d%s\n", 10, '+', 20, 10+20, "‚Å‚·" );

	fclose( fp );
	return 0;
}