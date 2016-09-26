#include <iostream>
#include <string.h>
#include <time.h>

typedef unsigned short ushort;
typedef unsigned int uint;

int main()
{
	uint randomx, randomy;
	ushort arrays[10][10] = {{0,0,0,0,0,0,0,0,0,0},
							{0,0,0,0,0,0,0,0,0,0},
							{0,0,0,0,0,0,0,0,0,0},
							{0,0,0,0,0,0,0,0,0,0},
							{0,0,0,0,0,0,0,0,0,0},
							{0,0,0,0,0,0,0,0,0,0},
							{0,0,0,0,0,0,0,0,0,0},
							{0,0,0,0,0,0,0,0,0,0},
							{0,0,0,0,0,0,0,0,0,0},
							{0,0,0,0,0,0,0,0,0,0}};
	
	srand(time(NULL));
	for (uint count = 0; count <= 10; count++)
	{
		randomx = rand() % 11;
		randomy = rand() % 11;
		if (arrays[randomx][randomy] == 0)
		{
			arrays[randomx][randomy] = 1;
		}
		else
		{
			count--;
		}

	}
	for (uint i = 0; i < 10; i++)
	{
		for (uint j = 0; j < 10; j++)
		{
			printf("%i", arrays[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;

}