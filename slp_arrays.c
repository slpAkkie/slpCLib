#include "slp_arrays.h"

vsize getArrLen( const char symbol, bool clsMode ) {
    vsize arr_lenght;
    printf( "������� ����������� ������� %c (%d-%d)\n>> ", symbol, _MIN_ARR_LEN, _MAX_ARR_LEN );

    while ( !getCorrectInt( &arr_lenght ) || arr_lenght > _MAX_ARR_LEN || arr_lenght < _MIN_ARR_LEN ) {
        if (clsMode) cls;
        redPrint( "����������� �� ��������� (2-50)\n���������� ��������� ����\n" );
        printf( ">> " );
    }

    return arr_lenght;
}

void fillIntArray( iarr arr, const char symbol, vsize len ) {
    for ( vsize i = 0; i < len; i++ ) {
        printf( "%c[%d] >> ", symbol, i + 1 );
        if ( !getCorrectInt( &arr[i] ) ) {
            redPrint( "�� ����� �� ����� �����\n" );
            printf( "���������� ��������� ����\n" );
            i--;
            continue;
        }
    }
}

void printIntArray( iarr arr, const char symbol, vsize len, const string status ) {
    greenPrint( "%s ������ %c\n", status, symbol );
    for ( vsize i = 0; i < len; i++ ) printf( "%4d  ", arr[i] );
    nl;
}