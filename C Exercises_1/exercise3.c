#include <stdio.h>

/* *
���������� ����������� , 3212015222
* ������� 1, ������ 3
*/


int main()
{

    int type;
    int days;
    float size;            //������ ����������
    float cost;
    int kappa;
    int choice;
    float tax=0.1;
    do                //main do while � ����� ����� � �������� ���� ��� menu ��� ��� � for
    {
        do
        {

            printf("\n Give type of vessel (1:speedboat , 2:sailing vessel) : ");     // ��� do while ��� �� �� ���� ������� ����� � ����������� �� ���������.
            scanf("%d", &type);
        }
        while(type!=1 && type!=2);

        printf("\n Give how many days u will rent it : ");
        scanf("%d", &days);
        printf("\n Give the size of it : ");
        scanf("%f", &size);
        if ( 1<=days<=3 && size<=5 && type==1)
        {
            cost=days*30;
        }
        else if(1<=days<=3 && size>5 && type==1)
        {
            cost=days*45;
        }
        else if(1<=days<=3 && size<=10 && type==2)
        {
            cost=days*100;                                            //��� � �������(�����������) �� ���� ��� ������ �� ������� ������� ��� ��� ���� ������� ������� �� ������ ������.
        }
        else if(1<=days<=3 && size>10 && type==2)
        {
            cost=days*130;
        }
        else if(4<=days<=7 && size<=5 && type==1)
        {
            cost=days*25;
        }
        else if(4<=days<=7 && size>5 && type==1)
        {
            cost=days*40;
        }
        else if(4<=days<=7 && size<=10 && type==2)
        {
            cost=days*90;
        }
        else if (4<=days<=7 && size>10 && type==2)
        {
            cost=days*125;
        }
        else if(days>7 && size<=5 && type==1)
        {
            cost=days*20;
        }
        else if(type==1 && days>7 && size>5)
        {
            cost=days*35;
        }
        else if(days>7 && size<=10 && type==2)
        {
            cost=days*85;
        }
        else if(days>7 && size>10 && type==2)
        {
            cost=days*115;
        }

        do
        {
            printf(" Do you really want full insurance coverage (1:y) or (2:n) ? :");

            scanf("%d", &choice);
            if(choice==1)
            {
                printf("\n The cost is : %f \n", cost+(cost*tax));
            }                                                                 //��� do while � ����� ����� ��� ������� �� � ����������� ����� ������ ����������� ������ � ���.
            else if (choice==2)
            {
                printf("\n The cost is : %f \n", cost);
            }

        }
        while(choice!=1 && choice!=2);


        do
        {
            printf("\n Do u want to rent another boat ? (No:0 , Yes:1) : ");  // ��� do while ��� ��  �� � �������(�����������) ����� �� ������������� ��� ���� �����.
            scanf("%d", &kappa);

        }
        while(kappa!=0 && kappa!=1);
    }
    while(kappa);

    return 0;
}

