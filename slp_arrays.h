#pragma once
#include "slp_io.h"
#include <stdio.h>

// ����������� ������ �������
#define _MIN_ARR_LEN 2
// ������������ ������ �������
#define _MAX_ARR_LEN 50

// ������������� ������
typedef int* iarr;

// ������������ ������
typedef float* farr;

#ifndef _VSIZE_T
    #define _VSIZE_T
    // ������ �������
    typedef unsigned int vsize;
#endif // !_VSIZE_T

// ������������� ������ �������
#define setArrLenght(arr, type, lenght) arr = ( type )malloc( lenght * sizeof( type ) )

/*
    �������� �� ������������ ������ �������
    ���������� ������ ������� ���� vsize (����������� ���: int)
*/
vsize getArrLen( const char symbol, bool clsMode );
// ��������� ������������� ������
void fillIntArray( iarr arr, const char symbol, vsize len );
// ������� ������������� ������
void printIntArray( iarr arr, const char symbol, vsize len, string status );
// ��������� ������������ ������
void fillFloatArray( farr arr, const char symbol, vsize len );
// ������� ������������ ������
void printFloatArray( farr arr, const char symbol, vsize len, string status );