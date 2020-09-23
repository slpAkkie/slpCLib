#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdarg.h>

#define _SLP_IO

// ��� "������" ��� �������� - �� ���� ������ ��������
typedef char* string;

/*
* ������� ��� ���������� ������ ����������� ������ � �������
* ����������� ������ ���� ������������ ������� init. � ����������� ������ ������� ��� ������� ����� ����� ���� �����������
*/

// ������ ������ ������� ������ (������ � �������������� init())
#define startRedColor printf("\033[31m")
// ������ ������ ����� ������ (������ � �������������� init())
#define startBlueColor printf("\033[34m")
// ������ ������ ������� ������ (������ � �������������� init())
#define startGreenColor printf("\033[32m")
// ������ ������ �� ��������� (������ � �������������� init())
#define endColor printf("\033[30m")

#ifdef __SLP_DEV_MODE__
#define redInput(_format, _offer, _dist) \
    startRedColor; \
    printf( _offer ); \
    scanf_s(_format, &_dist); \
    endColor
#define blueInput(_format, _offer, _dist) \
    startBlueColor; \
    printf( _offer ); \
    scanf_s(_format, &_dist); \
    endColor
#define greenInput(_format, _offer, _dist) \
    startGreenColor; \
    printf( _offer ); \
    scanf_s(_format, &_dist); \
    endColor
#endif // !SLP_FULL_MODE

// ��������� ������� �� ����� ������
#define nl printf("\n")
// �������� �����
#define cls system("cls")
// ��������� ���������� ��������� �� �����
#define pause system("pause")
// ��������� ���������� ��������� �� ����� ��� ���������
#define pause_s system("pause > nul")
#define _STD_READ_BUFFER 255

// ��� printf ������ ������� ������ (������ � �������������� init())
void redPrint( const string format, ... );
// ��� printf ������ ����� ������ (������ � �������������� init())
void bluePrint( const string format, ... );
// ��� printf ������ ������� ������ (������ � �������������� init())
void greenPrint( const string format, ... );

// ���������� ���� ������ �����
bool getCorrectInt( int* dist );
// ���������� ���� ������������� �����
bool getCorrectFloat( float* dist );