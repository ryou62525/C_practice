
#include <stdio.h>
#include <stdlib.h>



int main()
{
	
	int i;
	
	for(i=0;i<16;i++)
	{
		getchar();
	}
	
	unsigned char b[4];
	int w;
	fread(&w, 4,1, stdin);
	printf("%02x\n", b[0]);
	printf("%02x\n", b[1]);
	printf("%02x\n", b[2]);
	printf("%02x\n", b[3]);
	printf("w: %d\n", w);
 
	return 0;
}
