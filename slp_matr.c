/*
    ����� ���������� slpAkkie (GitHub Alexandr Shamanin)

    �������� ��������� ������ �� GitHub - https://github.com/slpAkkie/slpCLib
*/

#include "slp_matr.h"

msize getMatrSize( const string symbol, bool clsMode ) {
    msize size;
    size.rows = size.cols = -1;

    bool isCorrectInput;

    while ( true ) {
        printf( "������� ���������� ����� ������� %s (%d - %d)\n>> ", symbol, MIN_MATR_SIZE, MAX_MATR_SIZE );
        isCorrectInput = getCorrectInt( &size.rows );

        if ( clsMode ) cls;
        if ( size.rows >= MIN_MATR_SIZE && size.rows <= MAX_MATR_SIZE && isCorrectInput ) break;

        #ifdef _SLP_IO
        redPrint( "�� ����� ����������� ���������� �����\n�������� �� %d �� %d\n��������� ����\n", MIN_MATR_SIZE, MAX_MATR_SIZE );
        #else
        printf( "�� ����� ����������� ���������� �����\n�������� �� %d �� %d\n��������� ����\n", MIN_MATR_SIZE, MAX_MATR_SIZE );
        #endif // _SLP_IO

        printf( ">> " );
    }

    while ( true ) {
        printf( "������� ���������� �������� ������� %c (%d - %d)\n>> ", symbol, MIN_MATR_SIZE, MAX_MATR_SIZE );
        isCorrectInput = getCorrectInt( &size.cols );

        if ( clsMode ) cls;
        if ( size.cols >= MIN_MATR_SIZE && size.cols <= MAX_MATR_SIZE && isCorrectInput ) break;
        
        #ifdef _SLP_IO
        redPrint( "�� ����� ����������� ���������� ��������\n�������� �� %d �� %d\n��������� ����\n", MIN_MATR_SIZE, MAX_MATR_SIZE );
        #else
        printf( "�� ����� ����������� ���������� ��������\n�������� �� %d �� %d\n��������� ����\n", MIN_MATR_SIZE, MAX_MATR_SIZE );
        #endif // _SLP_IO

        printf( ">> " );
    }

    return size;
}

void fillIntMatr( msize size, imatr matr, char symbol ) {
    for ( vsize i = 0; i < size.rows; i++ )
        for ( vsize j = 0; j < size.cols; j++ ) {
            printf( "%c[%d][%d] >> ", symbol, i + 1, j + 1 );
            if ( !getCorrectInt( &matr[i][j] ) ) {
                
                #ifdef _SLP_IO
                redPrint( "\n�� ����� �� ����� �����\n��������� ����\n" );
                #else
                printf( "\n�� ����� �� ����� �����\n��������� ����\n" );
                #endif // _SLP_IO

                printf( ">> " );
                j--;
            }

        }
}

void printIntMatr( msize size, imatr matr, char symbol, string status ) {
    greenPrint( "%s ������� %c:\n", status, symbol );

    for ( vsize i = 0; i < size.rows; i++ ) {
        for ( vsize j = 0; j < size.cols; j++ )
            printf( "%4d  ", matr[i][j] );
        nl;
    }
    nl;
}

void fillFloatMatr( msize size, fmatr matr, char symbol ) {
    for ( vsize i = 0; i < size.rows; i++ )
        for ( vsize j = 0; j < size.cols; j++ ) {
            printf( "%c[%d][%d] >> ", symbol, i + 1, j + 1 );
            if ( !getCorrectFloat( &matr[i][j] ) ) {

                #ifdef _SLP_IO
                redPrint( "\n�� ����� �� �����\n��������� ����\n" );
                #else
                printf( "\n�� ����� �� �����\n��������� ����\n" );
                #endif // _SLP_IO

                printf( ">> " );
                j--;
            }

        }
}

void printFloatMatr( msize size, fmatr matr, char symbol, string status ) {
    greenPrint( "%s ������� %c:\n", status, symbol );

    for ( vsize i = 0; i < size.rows; i++ ) {
        for ( vsize j = 0; j < size.cols; j++ )
            printf( "%7.2f  ", matr[i][j] );
        nl;
    }
    nl;
}