#pragma once
#include "Structures.h" // импортируем структуру, которую объявили в другом файле
#include <stdlib.h> // импортируем для malloc()

int parse_line(ClientConfiguration* configuration, char* line); // анализируем нашу строку на предмет нужных нам полей

float string_to_float(const char* string); // перевод строки в дробное число. должно работать как с точной, так с запятой и положительными и отрицательными значениями

int is_str_equal(const char* str1, const char* str2); // возвращает 1 когда строки полностью идентичны, иначе 0

