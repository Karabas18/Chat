#include "Utils.h" // импортируем прототипы функций из Utils.h
#include <stdio.h>

int parse_line(ClientConfiguration* configuration, char* line) // анализируем нашу строку на предмет нужных нам полей
{
	const int CORRECT_CLASSES_COUNT = 4; // всего 4 валидного поля

	const char* correct_keys[] = { // объявляем массив из строк, в котором статически храним названия полей, которые могут быть в файле и правильно их будет разбирать
		"username",
		"password",
		"server_ip",
		"rating"
	};


	// псевдокод
	// мы должны получить из строки две строки. ключ и значение(как в формате) они должны быть разеделены : пробелом
	char* key = NULL, // точно валидными? ну у нас ведь они есть в файле, мы их не создаем. пока ты тут код не напишешь они будут NULL. и обрабатывать ошибки - нужно 
		* value = NULL;
	// твой код для разделения. ну пиши, просто же)
	// объяви и сделай функцию, которая по строке возвращает ее длину(без учета '\0') при мне
	//на высоком уровне что мы делаем, 
	int is_valid = 0;
	for (int i = 0; i < CORRECT_CLASSES_COUNT; i++)
		if (is_str_equal(key, correct_keys[i]))
			is_valid = 1;
	if (!is_valid) 
	{
		printf("Invalid key.\n");
		return 1;
	}

	// обработка валидных ключей. одно я напишу, другое ты
	if (is_str_equal(key, "username"))
	{
		configuration->username = value; // разберись с этим. как с -> так и с копированием указателей.
	}
	if (is_str_equal(key, "password"))
	{
		configuration->password = string_to_int(value); 
	}
	if (is_str_equal(key, "server_ip"))
	{
		configuration->server_ip = value;
	}
	if (is_str_equal(key, "rating"))
	{
		configuration->rating = string_to_float(value) ; // а тут? давай
	}

	// обрабока других полей

	// если ты где-то вызывал malloc, не забудь и про free.
	return 0; // если дошли до сюда, значит мы обработались правильно. придумай, как это сделать
}	

float string_to_float(const char* string) // перевод строки в дробное число. должно работать как с точной, так с запятой и положительными и отрицательными значениями
{
	// твоя реализация
	return -1; // zaglushka
}


int is_str_equal(const char* str1, const char* str2) // возвращает 1 когда строки полностью идентичны, иначе 0
{
	
	if (str1 == NULL || str2 == NULL) 
		return 0; 
	int i = 0;
	for (;; i++) 
		if (str1[i] != str2[i])
			return 0;
	return 1;
}

int string_to_int(const char* string)
{
	// твоя реализация
	return -1; // zaglushka
} 
int string_length(const char* line)
{
	if (line == NULL)
		return -1;
	int length = 0;
	while (line[length] != '\0')
		length++;
	return length - 1;
}
