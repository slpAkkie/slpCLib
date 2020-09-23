#include "slp_io.h"
#include "slp_crumbs.h"
#include "slp_arrays.h"
#include "slp_matr.h"


void main( void ) {
    // �������� ������������� �������� ������� � �������� �������� ����
    init( "������������ ������������ ������" );

    while ( true ) {
        bluePrint( "�� ��������� ������ ���������� slpLib_c\n\n" );

        if ( !askUserYN( "������ �������� �� ������������ ����������?" ) ) break;
        cls;

        // ����� ����� ������� ������ �����
        bool inputError;
        printf( "��� ������ ������ ��� ������ �� ���� ������������ ������\n" );

        greenPrint( "\n������� ������ ��� ����� ����� �����:\n" );
        printf( "������� x >> " );
        // ��� ����� ����������� ��������� ������������� �����
        int x;
        inputError = getCorrectInt( &x );
        if ( !inputError ) redPrint( "�� ����� �� ����� ����� � ��������� ������\n" );
        else greenPrint( "�� ��������� ����� ����� ����� x = %d\n", x );

        greenPrint( "\n������ ������ ��� ������������ �����:\n" );
        printf( "������� y >> " );
        // ������ ���������� ������ ����� ������������
        float y;
        inputError = getCorrectFloat( &y );
        if ( !inputError ) redPrint( "�� ����� �� ����� ����� � ��������� ������\n" );
        else greenPrint( "�� ��������� ����� ������������ ����� y = %.2f\n", y );

        if ( !askUserYN( "\n\n���������� ��������?" ) ) break;
        cls;

        bluePrint( "������ ������ ��� ������� ������ � ���������\n\n" );
        char arrAlias = 'X';
        // �������� ������ ������� � ���������� ���� vsize
        vsize arrLen = getArrLen( arrAlias, false );
        // ������ ��������� ��� ������� ���������� ���� farr (���� ������������ � iarr ���� �������������)
        farr arrX;
        // �� ��� ���������� ������ ���� �������� ������
        setArrLenght( arrX, farr, arrLen );
        cls;

        bluePrint( "������ ������� ������ ��� ������:\n" );
        fillFloatArray( arrX, arrAlias, arrLen );
        cls;

        printFloatArray( arrX, arrAlias, arrLen, "��� ���������" );

        pause;
        cls;
        bluePrint( "��� �� ���� ��������� �� ������ � ���������?\n" );
        char matrAlias = 'M';
        // �������� ������ ������� � ���������� ���� msize
        msize matr_size = getMatrSize( matrAlias, false );
        // � �������� ��� ��, ����������� ��� ���������� � ��������� ���� imatr (���� ������������ � imatr ���� �������������)
        imatr matrX;
        // �� �� ���������� ������ ���� �������� ������
        setMatrLenght( matrX, imatr, imatr_el, matr_size );
        fillIntMatr( matr_size, matrX, matrAlias );
        printIntMatr( matr_size, matrX, matrAlias, "���� ���������" );

        pause;
        cls;
        bluePrint( "��� ����� ���������� ���� � ���� ���������� ���� ��� :)\n" );

        if ( !askUserYN( "\n\n������ ������ ������?" ) ) break;
    }
}