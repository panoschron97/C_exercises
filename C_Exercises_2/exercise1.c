#include <stdio.h>
#include <string.h>
#define stringg 10
#define stringlength 20
/*
* ���������� �����������, 321/2015222
* ������� 2, ������ 1
*/

int main()
{

    int q, w, e, i ;
    char string[stringg][stringlength], t ;                 //������ ����������
    int N, f;
    char a;

    printf("\nHow many strings u want : ");     // ��� ���� ���� strings ���� �� ��� ����������� ��� �����.
    scanf("%d", &N);

    for(i=0; i<N; i++)
    {
        printf("\nGive string : ");               //for ���� ����� �� ���� ��� ������ ��� strings ��� ��� ����� , ����� ��� ����������� ����������� ��� ���� �� strings ��� �� ������������.
        scanf(" %[^\n]s", &string[i]);

    }

    for(i=0; i<N; i++)                     //for ���� �� ���� �� ������� ���� string ����� �� ���������� ��� ���������� ���� ��� ��� �����.
    {

        f=strlen(string[i]);

        for(q=1; q<f; q++)
        {
            for(w=0; w<f-q; w++)
            {

                if(string[i][w]>string[i][w+1])
                {
                    a=string[i][w];
                    string[i][w]=string[i][w+1];
                    string[i][w+1]=a;
                }
            }
        }

    }

    for(i=0; i<N; i++)            // ������ for � ����� ��� ��������� ���� string ��� ������ �� ������� ����� ��� �� ������������ ( �� �������� ���� ��������� ����� �� ���� ��� ���� ���� ���������� ��� ���� strjng ����������.
    {
        printf( "\nSorted string is : %s \n", string[i]);

    }
    return 0;
}
