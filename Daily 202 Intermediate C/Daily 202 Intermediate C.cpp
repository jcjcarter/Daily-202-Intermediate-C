// Daily 202 Intermediate C.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>

int main(int argc, char **argv) {
	int year = atoi(argv[1]);
	int a = year % 4;
	int b = year % 7;
	int c = year % 19;
	int d = (19 * c + 15) % 30;
	int e = (2 * a + 4 * b - d + 34) % 7;
	int month = (d + e + 114) / 31;
	int day = (d + e + 114) % 31 + 1;
	printf("Easter Day in %d occurred on %d/%d/%d according to the Julian calendar.", year, month, day, year);
}

