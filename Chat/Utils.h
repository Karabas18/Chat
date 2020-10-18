#pragma once
#include "Structures.h" // ����������� ���������, ������� �������� � ������ �����
#include <stdlib.h> // ����������� ��� malloc()

const int CORRECT_CLASSES_COUNT = 4; // ����� 4 ��������� ����

const char* correct_keys[] = { // ��������� ������ �� �����, � ������� ���������� ������ �������� �����, ������� ����� ���� � ����� � ��������� �� ����� ���������
	"username",
	"password",
	"server_ip",
	"rating"
};

int parse_line(ClientConfiguration* configuration, char* line); // ����������� ���� ������ �� ������� ������ ��� �����

float string_to_float(const char* string); // ������� ������ � ������� �����. ������ �������� ��� � ������, ��� � ������� � �������������� � �������������� ����������

int is_str_equal(const char* str1, const char* str2); // ���������� 1 ����� ������ ��������� ���������, ����� 0