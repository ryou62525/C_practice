#define _CRT_SECURE_NO_DEPRECATE 1  /* VisualC++2005 �ł̌x���}�� */
#include <stdio.h>

int main(void)
{
	FILE *fp;
	
	fp = fopen( "test.txt", "w" );
	if( fp == NULL )
	{
		puts( "test.txt���J���܂���" );
		return 1;
	}
	
	/* 10 + 20 = 30�ł��@�Ə������� */
	fprintf( fp, "%d %c %d = %d%s\n", 10, '+', 20, 10+20, "�ł�" );

	fclose( fp );
	return 0;
}