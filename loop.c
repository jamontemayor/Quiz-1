/*
 * Jed Montemayor
 * CSC 251 - C Programming in UNIX
 * 26 February 2020
 * Question 12
*/

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i, x = 0;
	double value;

	for(i = 0; i < 11; i++)
	{
		x += 2;
		printf(" %d\n", &x);
	}

	x /= 20;
	printf(" %.3d\n", &x);
}
