#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
* ���������� ����������� , 321/2015222
* ������� 3, ������ 3
*/

int totall, maxoverall , maxandoverall, times=0;
                                                                 // ������ ����������.
int choice;

char id[5];

int length=5;

char category[3][13]= {"mosxatoleuko", "roditis", "sabbatiano"};

int stage();// ������ ����������.

int main()// ��������� main.
{

    int o;

    printf("\nA program with grapes that salesmen sell from Samos.\n");// �� ��������� ���.

    printf("\nGive your choice(1 to continue and give the number of salesmen for every category of grapes OR -1 to end the program) : ");// �������.

    scanf("%d", &choice);

    while(choice==1)// while ��� �� �� � ������� ����� 1 ������� ���� ��������� stage.

    {
        for(o=0; o<3; o++)
        {

            stage();

        }

        printf("\n\nTotal kilos are %d.\n", totall);

        printf("\nMax kilos in weight that delivered are %d on %s with salesman's id %s.\n", maxoverall, category[maxandoverall], id); // ������ ������������.

        printf("\nMax kilos that delivered are %d. Existed on %s.\n", maxoverall, category[maxandoverall]);

        break;

    }

    while(choice==-1)// while ��� �� �� � ������� ����� -1 � ������� �� ��������� ������������.

    {

        return 0;// ����� ������������.

    }

}

int stage()// ��������� stage.
{

    int *salesmen;

    int i, j,  kilos, total=0;                 // ������ ����������.

    float average;

    printf("\nPlease give a number of salesmen that create %s : ", category[times]);

    scanf("%d", &i);

    salesmen=(int*)malloc(i*sizeof(int)); // malloc ���� ����� � ������ ��� ��� ���������� ������� ������� ������� ���������.

    for(j=1; j<=i; j++)

    {

        do

        {

            printf("\nPlease give the id of salesman %d(the id must be 5 numbers.) : ", j);

            scanf("%s", &id);

            length=strlen(id);

        }

        while(length!=5); // �� ������ ������� ��� ������� ������� ��� ���� ������.

        printf("\nGive the kilos of salesman %d that delivered : ", j); // ���� ��� ���� ������.

        scanf("%d", &kilos);

        salesmen[j-1]=kilos;

        total+=kilos;

        totall+=kilos;

        if(kilos>maxoverall)// �������� ��� �� ���� ��� ������ �� �� ����������� ����.

        {

            maxoverall=kilos;

            maxandoverall=times;

        }

    }

    free(salesmen);

    times+=1;

    return 0;// ����� ����������.

}
