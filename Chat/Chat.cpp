#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <Windows.h>
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE
#pragma warning(disable : 4996)
#include "Structures.h"


int main()
{

		FILE* file;
		char buffer[128];

		file = fopen("C:/d/test.txt", "w");
		printf("Last error: %d", GetLastError());
		fprintf(file, "Hello, World!");
		fclose(file);
		file = fopen("C:/d/test.txt", "r");
		fgets(buffer, 127, file);
		printf("%s", buffer);
		fclose(file);
		_getch(); 
}
