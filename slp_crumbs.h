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
bool askUserYN( const string question );