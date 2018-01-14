#include "stdafx.h"
#include "a.h"

long fac(long number) {
	long result = 1;
	for (long i = 2; i <= number; ++i) {
		result *= i;
	}
	return result;
}