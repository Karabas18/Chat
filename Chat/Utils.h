#pragma once
#include "Structures.h" // ����������� ���������, ������� �������� � ������ �����

const char* correct_keys[] = { // ��������� ������ �� �����, � ������� ���������� ������ �������� �����, ������� ����� ���� � ����� � ��������� �� ����� ���������
	"username",
	"password",
	"server_ip",
	"rating"
};

int parse_line(ClientConfiguration* configuration, char* line); // ����������� ���� ������ �� ������� ������ ��� �����

float string_to_float(const char* string); // ������� ������ � ������� �����. ������ �������� ��� � ������, ��� � ������� � �������������� � �������������� ����������
