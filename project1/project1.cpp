// project1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>


int main(int argc, char* argv[])
{
	//printf("%i\n",argc);
	int sum = 0;
	for (int i = 0; i < argc; ++i) {
		sum += atoi(argv[i]);
	}
	printf("sum is %i", sum);
	return sum;
}

