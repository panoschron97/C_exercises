#include <stdio.h>
#include <stdlib.h>
#define player 5
/*
* ���������� �����������, 321/2015222
* ������� 2, ������ 2
*/

int main()
{
    int rounds;
    int playerss;
    int i,j;
    int randomnumber;                           //������ ����������.
    int playerguess;
    int players[player];
    int sum[5];
    int a;

    for(i=1; i<=rounds; i++)
    {
        for(j=1; j<=playerss; j++)       // for ���� ��������� �� ���� sum �� ����� �� ������� ����� ���� ������� ��� ���� ������ ��� ����� ��� �� ������ �� ������ �������� ��� ��� ������ ���������.
        {

            sum[j]=0;
        }
        j=0;
    }

    printf("\nWelcome to guess the number game. \n");

    srand(time(NULL));

    randomnumber=rand()%5+1;           // � ������� ������� ��� ��� ��� ���� ��� ��� �� ����������� ��� �� ���� test �� ��������� ��� �� ��������.

    printf( "\nThe spoil random number is ( to see my program is working ). : %d\n",randomnumber);

    do
    {

        printf("\nGive how many players will play (1 - 5). : ");  // ��� do while ���� ����� ���� ������ �� ��� ����� 1 ��� 5 ������� .
        scanf("%d", &playerss);

    }
    while(playerss>5 || playerss<1);

    do
    {

        printf("\nGive how many rounds to play(1 - 3). : "); // ���� ��� do while ���� ����� ��� ��� ������ �� ��� ����� ������ ������ ����� (����� ����� ����� ���� ��� ���������).
        scanf("%d", &rounds);


    }
    while(rounds>3 || rounds<1);

    for(i=1; i<=rounds; i++)   // for ���� �� ����������� ��� �� ����� ������� �� ������ ������ ������ ����� ��� ����.
    {
        printf("\nround : %d\n", i);
        for(j=1; j<=playerss; j++)  // for ���� ���� for ��� ����� ���� ���� � for �� ������ ������� �� ���� ������� ��� 1 ����� 5 ����� ��� ������ ��� ����.
        {

            do
            {
                printf("\nplayer %d please give me your guess( 1 - 5 guess number). : ", j); // ��� do while ��� �� ������� ��� ������� ��� ������� ��� �� 1 ��� �� 5.
                scanf("%d", &playerguess);
            }
            while(playerguess>5 || playerguess<1);

            if(randomnumber==playerguess) // if ���� �� �� ������� ��� ������� � ������� ����� ����� �� ��� ������ ������ ���� ������� 10 �������.
            {

                players[player]+=10-playerguess;
                printf("\nplayer %d bullseye the random number. \n", j );
                printf("\nThe points of player %d are : %d. \n", j, players[player]);

            }

            else if(playerguess-randomnumber==4 || randomnumber-playerguess==4) //if ���� �� �� ������� ��� ������� � ������� ������ 4 ��� ��� ������ ������ (� �� �������� ������ � ������� ������� �� ������ 4 ��� ��� ������ ��� ����� � �������) ���� ������� 6 �������.
            {

                players[player]+=6-playerguess;
                printf("\nplayer %d guessed with difference 4 from random number. \n", j );
                printf("\nThe points of player %d are : %d. \n", j, players[player]);


            }

            else if(playerguess-randomnumber==2 || randomnumber-playerguess==2) //if ���� �� �� ������� ��� ������� � ������� ������ 2 ��� ��� ������ ������ (� �� �������� ������ � ������� ������� �� ������ 2 ��� ��� ������ ��� ����� � �������) ���� ������� 8 �������.
            {

                players[player]+=8-playerguess;
                printf("\nplayer %d guessed with difference 2 from random number. \n", j );
                printf("\nThe points of player %d are : %d. \n", j, players[player]);


            }

            else if(playerguess-randomnumber==3 || playerguess-randomnumber==1 || randomnumber-playerguess==1 || randomnumber-playerguess==3) //if ���� �� �� ������� ��� ������� � ������� ������ 1 � 3 (� �� �������� ������ � ������� ������� �� ������ 1 � 3 ��� ��� ������ ��� ����� � �������) ��� ��� ������ ������ ���� ������� 2 �������.
            {

                players[player]+=2-playerguess;
                printf("\nplayer %d guessed with all other situations from random number. \n", j );
                printf("\nThe points of player %d are : %d. \n", j, players[player]);


            }
            sum[j]+=players[player]; // �� sum �� ����� ��������� ���� ������� ��� ���� ������ ������� �� �� ����� ������� ������� ��� ����� ����� ��������.



        }

    }
    for(i=1; i<=rounds; i++) // for � ����� ����� �� ���������� ��� �� ������ �� ���������� ��� ���� ������ ��� �� ���������� �������� ���� �� ���������.
    {
        for(j=1; j<=playerss; j++)
        {
            if(sum[j]<sum[j+1])
            {

                a=sum[j];
                sum[j]=sum[j+1];
                sum[j+1]=a;

            }
        }
    }
    for(j=1; j<=playerss; j++) // for � ����� ��������� �� ������ ���������� ��� ���� ������ ��� �� ���������� ��� ���������.
    {
        printf("\nWhole points from player %d  are  : %d. \n", j, sum[j]);
    }


    return 0;
}
