/*
    ����� ���������� slpAkkie (GitHub Alexandr Shamanin)

    �������� ��������� ������ �� GitHub - https://github.com/slpAkkie/slpCLib
*/

#pragma once
#include "slp_io.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// ������ ������� "title "
#define _TITLE_COMMAND_LEN 6
// ������������ ������ ������ �������� "title ..."
#define _MAX_TITLE_COMMAND_LEN 64

// ���������������� ��������� ������� (���������� ��� ������������� �������� ������)
void init( const string title );
/*
    ������ ������������ ������ � ���������� �� (Y) � ��� (N)
    ������ true ���� ������������ ������� �� � false � ��������� �������
*/
bool askUserYN( const string question );
