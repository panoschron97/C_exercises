#include <stdio.h>

/*
* ���������� ����������� , 3212015222
* ������� 1, ������ 1
*/

int main()
{


    int fourdigit;
    int onedigit;                //������ ����� �������� ����������.
    int fivedigit;

    printf(" Enter four digit number : ");
    scanf("%d", &fourdigit);                        //�������� ��� ���������� ������ ��� ������ ��� �� ������������.

    printf(" Enter one digit number : ");
    scanf("%d", &onedigit);                         //�������� ��� ��������� ������ ��� ������ ��� �� ������������.

    fivedigit=(fourdigit/100)*1000 +fourdigit%100 + onedigit*100; //����� � ����� ��������� ��� ��������� ������ ���� ���� ��� �����������

    printf(" The five digit number is : %d ", fivedigit);  // ��������� ��� ���������� ������ ��� �������.

    return 0;
}
