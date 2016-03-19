#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char **charSquare(int n);
void drawCharSquare(char **square, int n);

int main(int argc, char **argv)
{
	int n=atoi(argv[1]);
	srand(atoi(argv[2]));
	drawCharSquare(charSquare(n), n);	
}

char **charSquare(int n)
{
	char **square;
	square = new char *[n];

	for(int i=0;i<n;i++)
		square[i] = new char[n];

	for(int i=0,j=0;(i<n)||(j<n);j++)
	{
			square[i][j%n]=97+rand()%26;
			if((j%n)==n-1) i++;
	}

	return square;

}

void drawCharSquare(char **square, int n)
{
	for(int i=0,j=0;(i<n)||(j<n);j++)
	{
			printf("%c ", square[i][j%n]);
			if((j%(n))==n-1)
			{
				i++;
				printf("\n");
				delete [] square[i-1];
			}
	}
	delete []square;	
}