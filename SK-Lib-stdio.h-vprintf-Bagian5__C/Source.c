#pragma warning(disable:4996)

#include <stdio.h>
#include <stdarg.h>
#include <conio.h>

/*
	Source by AlphaCodingSkills
	Modified For Learn by RK
	I.D.E : VS2019
*/

void PrintFormatted(const char* format, ...) {
	va_list args;
	va_start(args, format);
	vprintf(format, args);
	va_end(args);
}

int main() {
	PrintFormatted("Calling with %d variable argument.\n", 1);
	PrintFormatted("Calling with %d variable %s.\n", 2, "arguments");
	PrintFormatted("Calling with %d %s %s.\n", 3, "variable", "arguments");

	_getch();
	return 0;
}

