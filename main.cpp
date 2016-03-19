#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char **charSquare(int n);
void drawCharSquare(char **square, int n);

int main(int argc, char **argv)
{
	int n=atoi(argv[1]);
	srand(time(NULL));
	drawCharSquare(charSquare(n), n);	
}

char **charSquare(int n)
{
	char **square;
	square = new char *[n];

	for(int i=0;i<n;i++)
		square[i] = new char[n];

	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
		{
			square[i][j]=97+rand()%27;
			printf("%c",square[i][j]);
		}

	return square;

}

void drawCharSquare(char **square, int n)
{

}