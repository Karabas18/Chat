#pragma once
#include "Structures.h" // импортируем структуру, которую объявили в другом файле

const char* correct_keys[] = { // объявляем массив из строк, в котором статически храним названия полей, которые могут быть в файле и правильно их будет разбирать
	"username",
	"password",
	"server_ip",
	"rating"
};

int parse_line(ClientConfiguration* configuration, char* line); // анализируем нашу строку на предмет нужных нам полей

float string_to_float(const char* string); // перевод строки в дробное число. должно работать как с точной, так с запятой и положительными и отрицательными значениями
