
#include "stdafx.h"
#include"W32A.h"
int factorial(int n) {
	int sum = 1;
	for (int i = n; i > 0; i--)
	{
		sum = sum*i;
	}
	return sum;
}