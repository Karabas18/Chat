#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <Windows.h>
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE
#pragma warning(disable : 4996)
#include "Structures.h"
#include "Utils.h" // загружаем функции из другого файла

#define MAX_BUFFER_SIZE 228

int main()
{
	ClientConfiguration config = { 0 }; // зануляем сразу все поля в структуре

	FILE* file;
	file = fopen("C:\\Chat\\Chat\\client.cfg", "r"); 
	if (file == NULL) // если не смогли открыть файл
	{
		printf("Nelzya otkrit file. Oshibka: %d\n", GetLastError());
		exit(1);
	}
	else
		printf("Uspeshno otkrit file!");
	char buffer[MAX_BUFFER_SIZE];
	while (fgets(buffer, MAX_BUFFER_SIZE, file)) {
		int success = parse_line(&config, buffer); // пояснишь за это
		if (success != 0) // если не смогли распарсить
		{
			// обработка ошибки 
		}
	}
	// В консоль должно вывестись те же самые значение как и в файле. Иначе сообщение об ошибке
	printf("Uspeshno zagruzhen config.\n");
	printf("User name: %s\n", config.username); // и почему тут точка
	printf("User passowrd: %d\n", config.password);
	printf("Server ip: %s\n", config.server_ip);
	printf("User rating: %f\n", config.rating);

	fclose(file);
	return 0;
} 
