#include <stdio.h>

/*
* ���������� ����������� , 321/2015222
* ������� 3, ������ 1
*/

int category(int [3][5],int [3][5],int [3][5],int,int);// ��������� ��� ��� ����������(������ , �������� , �������).

int find_row_min(int [3][5],int [3][5], int [3][5],int,int);// ��������� ��� ������� ��� ��������� ����� �� ���� ����� ��� ��� �����.

int main() // ��������� main.

{

    int a[3][5], b[3][5], c[3][5], r, d;// ������ ����������.

    printf("\nA foot race program.\n");// �� ��������� ���.

    do

    {

        printf("\nPlease enter the number of the lines(3 must be entered) : ");// ��� do while ��� ������ � ������� ���������� �� ������� ��� ������ 3.

        scanf("%d", &r);

    }

    while(r!=3);

    do

    {

        printf("\nPlease enter the number of the crowd in every line(5 must be entered (3x5=15)) : ");// ��� do while ��� ������ � ������� ���������� �� ������� ��� ������ 5.

        scanf("%d", &d);
    }

    while(d!=5);

    category(a,b,c,r,d);

    find_row_min(a,b,c,r,d);// �� ��� ����������� ��� ��� ������� ���� ���� main ��������� ���.

    return 0;// ����� ����������.

}

int category(int m[3][5], int mm[3][5], int mmm[3][5], int r, int d)// ��������� category.

{

    int i,j;// ������ ����������.

    for(i=0; i<r-2; i++)

    {

        printf("\nFirst line.\n");// ����� ����� ��� ����� �� ������.

        for(j=0; j<d; j++)

        {

            printf("\nGive the time for the kid with the number %d from his t-shirt : ", j+100);

            scanf("%d", &m[i][j]);

        }

        printf("\nSecond line.\n");// ������� ����� ��� ����� �� ��������.

        for(j=0; j<d; j++)

        {

            printf("\nGive the time for the woman with the number %d from her t-shirt : ", j+105);

            scanf("%d", &mm[i][j]);

        }

        printf("\nThird line.\n");// ����� ����� ��� ����� �� ������.

        for(j=0; j<d; j++)

        {

            printf("\nGive the time for the man with the number %d from his t-shirt : ", j+110);

            scanf("%d", &mmm[i][j]);

        }

    }

    return 0;// ����� ����������.

}

int find_row_min(int m[3][5], int mm[3][5], int mmm[3][5], int r, int d)
// ��������� find_row_min.
{

    int minn=mm[0][0], min=m[0][0], minnn=mmm[0][0], i, j;// ������ ����������.

    for(i=0; i<r-2; i++)

    {

        for(j=0; j<d; j++)

        {

            if(m[i][j]<min)

                min=m[i][j];

        }
                                            // ����� if �� ������ ������� �� ���� ����� ��� ��������� �����.
        for(j=0; j<d; j++)

        {
            if(mm[i][j]<minn)

                minn=mm[i][j];

        }

        for(j=0; j<d; j++)

        {

            if(mmm[i][j]<minnn)

                minnn=mmm[i][j];

        }

    }

    printf("\n\n\n\n\nRESULT\n");// �� ������ ������������.

    printf("\n\n\n\n\nThe smallest time from the kids is : %d sec.\n", min);

    printf("\nThe smallest time from the women is : %d sec.\n", minn);

    printf("\nThe smallest time from the men is : %d sec.\n", minnn);

    return 0;//����� ����������.

}




