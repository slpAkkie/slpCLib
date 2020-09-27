/*
    ����� ���������� slpAkkie (GitHub Alexandr Shamanin)

    �������� ��������� ������ �� GitHub - https://github.com/slpAkkie/slpCLib
*/

#include "slp_arrays.h"

vsize getArrLen( const string symbol, bool clsMode ) {
    vsize arr_lenght;
    printf( "������� ����������� ������� %s (%d-%d)\n>> ", symbol, _MIN_ARR_LEN, _MAX_ARR_LEN );

    while ( !getCorrectInt( &arr_lenght ) || arr_lenght > _MAX_ARR_LEN || arr_lenght < _MIN_ARR_LEN ) {
        clsMode&& cls;

        #ifdef _SLP_IO
        redPrint( "����������� �� ��������� (2-50)\n���������� ��������� ����\n" );
        #else
        printf( "����������� �� ��������� (2-50)\n���������� ��������� ����\n" );
        #endif // _SLP_IO

        printf( ">> " );
    }
    clsMode&& cls;

    return arr_lenght;
}

void fillIntArray( iarr arr, const string symbol, vsize len ) {
    for ( vsize i = 0; i < len; i++ ) {
        printf( "%s[%d] >> ", symbol, i + 1 );
        if ( !getCorrectInt( &arr[i] ) ) {

            #ifdef _SLP_IO
            redPrint( "�� ����� �� ����� �����\n" );
            #else
            printf( "�� ����� �� ����� �����\n" );
            #endif // _SLP_IO

            printf( "���������� ��������� ����\n" );
            i--;
            continue;
        }
    }
}

void printIntArray( iarr arr, const string symbol, vsize len, const string status ) {
    greenPrint( "%s ������ %s\n", status, symbol );
    for ( vsize i = 0; i < len; i++ ) printf( "%4d  ", arr[i] );
    nl;
}

void fillFloatArray( farr arr, const string symbol, vsize len ) {
    for ( vsize i = 0; i < len; i++ ) {
        printf( "%s[%d] >> ", symbol, i + 1 );
        if ( !getCorrectFloat( &arr[i] ) ) {

            #ifdef _SLP_IO
            redPrint( "�� ����� �� �����\n��������� ����\n" );
            #else
            printf( "�� ����� �� �����\n��������� ����\n" );
            #endif // _SLP_IO

            printf( "���������� ��������� ����\n" );
            i--;
            continue;
        }
    }
}

void printFloatArray( farr arr, const string symbol, vsize len, const string status ) {
    greenPrint( "%s ������ %s\n", status, symbol );
    for ( vsize i = 0; i < len; i++ ) printf( "%7.2f  ", arr[i] );
    nl;
}
