// project1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h> //atoi
#include <iostream>;
#include "a.h";

using namespace std;

int main(int argc, char* argv[])
{
	if (argc != 2) {
		cout << "please supply exactly one number as parameter!" << endl;
	}
	else {
		cout << argv[1] << "! = " << fac(atoi(argv[1])) << endl;
	}
	return 0;
}

