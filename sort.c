#include <stdio.h>

int main()
{
	int value[] = {1,2,3,4,5};
	
	for(int i = 0; i < 5; i++)
	{
		value[i] = i;
	}

	printf("%s", value);


}