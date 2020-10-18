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
		file = fopen("C:\Chat\Chat\client.cfg", "w");
		if (file == NULL) // если не смогли открыть файл
		{
			printf("Nelzya otkrit file. Oshibka: %d\n", GetLastError());
			exit(1);
		}
		else
			printf("Uspeshno otkrit file!");
		// тут поставишь ту штуку с циклами
		fclose(file);
		return 0;
}
