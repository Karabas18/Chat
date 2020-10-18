#include "Utils.h" // ����������� ��������� ������� �� Utils.h
#include <stdio.h>

int parse_line(ClientConfiguration* configuration, char* line) // ����������� ���� ������ �� ������� ������ ��� �����
{
	const int CORRECT_CLASSES_COUNT = 4; // ����� 4 ��������� ����

	const char* correct_keys[] = { // ��������� ������ �� �����, � ������� ���������� ������ �������� �����, ������� ����� ���� � ����� � ��������� �� ����� ���������
		"username",
		"password",
		"server_ip",
		"rating"
	};


	// ���������
	// �� ������ �������� �� ������ ��� ������. ���� � ��������(��� � �������) ��� ������ ���� ���������� : ��������
	char* key = NULL, // ����� ���������? �� � ��� ���� ��� ���� � �����, �� �� �� �������. ���� �� ��� ��� �� �������� ��� ����� NULL. � ������������ ������ - ����� 
		* value = NULL;
	// ���� ��� ��� ����������. �� ����, ������ ��)
	// ������ � ������ �������, ������� �� ������ ���������� �� �����(��� ����� '\0') ��� ���
	//�� ������� ������ ��� �� ������, 
	int is_valid = 0;
	for (int i = 0; i < CORRECT_CLASSES_COUNT; i++)
		if (is_str_equal(key, correct_keys[i]))
			is_valid = 1;
	if (!is_valid) 
	{
		printf("Invalid key.\n");
		return 1;
	}

	// ��������� �������� ������. ���� � ������, ������ ��
	if (is_str_equal(key, "username"))
	{
		configuration->username = value; // ��������� � ����. ��� � -> ��� � � ������������ ����������.
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
		configuration->rating = string_to_float(value) ; // � ���? �����
	}

	// �������� ������ �����

	// ���� �� ���-�� ������� malloc, �� ������ � ��� free.
	return 0; // ���� ����� �� ����, ������ �� ������������ ���������. ��������, ��� ��� �������
}	

float string_to_float(const char* string) // ������� ������ � ������� �����. ������ �������� ��� � ������, ��� � ������� � �������������� � �������������� ����������
{
	// ���� ����������
	return -1; // zaglushka
}


int is_str_equal(const char* str1, const char* str2) // ���������� 1 ����� ������ ��������� ���������, ����� 0
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
	// ���� ����������
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
