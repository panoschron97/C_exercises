#include <stdio.h>
#include <stdlib.h>
#define player 5
/*
* Παναγιώτης Χρονόπουλος, 321/2015222
* Εργασία 2, Άσκηση 2
*/

int main()
{
    int rounds;
    int playerss;
    int i,j;
    int randomnumber;                           //δήλωση μεταβλητών.
    int playerguess;
    int players[player];
    int sum[5];
    int a;

    for(i=1; i<=rounds; i++)
    {
        for(j=1; j<=playerss; j++)       // for όπου μηδενίζει το κάθε sum το οποίο θα μετράει όλους τους πόντους για κάθε παίχτη στο τέλος και θα βγάζει το τελικό άθροισμα για τον καθένα ξεχωριστά.
        {

            sum[j]=0;
        }
        j=0;
    }

    printf("\nWelcome to guess the number game. \n");

    srand(time(NULL));

    randomnumber=rand()%5+1;           // ο τυχαίος αριθμός μας που από κάτω τον έχω να εμφανίζεται για να κάνω test το προγραμμά μου αν δουλεύει.

    printf( "\nThe spoil random number is ( to see my program is working ). : %d\n",randomnumber);

    do
    {

        printf("\nGive how many players will play (1 - 5). : ");  // μία do while όπου ζητάω στον χρήστη να μου δώσει 1 έως 5 παίχτες .
        scanf("%d", &playerss);

    }
    while(playerss>5 || playerss<1);

    do
    {

        printf("\nGive how many rounds to play(1 - 3). : "); // άλλη μία do while όπου ζητάω από τον χρήστη να μου δώσει πόσους γύρους θέλει (έβαλα μέχρι τρεις λόγω του φυλλαδίου).
        scanf("%d", &rounds);


    }
    while(rounds>3 || rounds<1);

    for(i=1; i<=rounds; i++)   // for όπου οι επαναλήψεις της θα είναι ανάλογα με πόσους γύρους έχουμε δώσει πιο πριν.
    {
        printf("\nround : %d\n", i);
        for(j=1; j<=playerss; j++)  // for μέσα στην for των γύρων όπου αυτή η for θα τρέξει ανάλογα με τους παίχτες από 1 μέχρι 5 πάντα που δώσαμε πιο πριν.
        {

            do
            {
                printf("\nplayer %d please give me your guess( 1 - 5 guess number). : ", j); // μία do while για να δώσουμε σαν χρήστες ένα νούμερο από το 1 έως το 5.
                scanf("%d", &playerguess);
            }
            while(playerguess>5 || playerguess<1);

            if(randomnumber==playerguess) // if όπου αν το νούμερο που μάντεψε ο παίχτης είναι ίδιος με τον τυχαίο αριθμό τότε παίρνει 10 πόντους.
            {

                players[player]+=10-playerguess;
                printf("\nplayer %d bullseye the random number. \n", j );
                printf("\nThe points of player %d are : %d. \n", j, players[player]);

            }

            else if(playerguess-randomnumber==4 || randomnumber-playerguess==4) //if όπου αν το νούμερο που μάντεψε ο παίχτης απέχει 4 από τον τυχαίο αριθμό (ή το αντίθετο δηλαδή ο τυχαίος αριθμός να απέχει 4 από τον αριθμό που έδωσε ο παίχτης) τότε παίρνει 6 πόντους.
            {

                players[player]+=6-playerguess;
                printf("\nplayer %d guessed with difference 4 from random number. \n", j );
                printf("\nThe points of player %d are : %d. \n", j, players[player]);


            }

            else if(playerguess-randomnumber==2 || randomnumber-playerguess==2) //if όπου αν το νούμερο που μάντεψε ο παίχτης απέχει 2 από τον τυχαίο αριθμό (ή το αντίθετο δηλαδή ο τυχαίος αριθμός να απέχει 2 από τον αριθμό που έδωσε ο παίχτης) τότε παίρνει 8 πόντους.
            {

                players[player]+=8-playerguess;
                printf("\nplayer %d guessed with difference 2 from random number. \n", j );
                printf("\nThe points of player %d are : %d. \n", j, players[player]);


            }

            else if(playerguess-randomnumber==3 || playerguess-randomnumber==1 || randomnumber-playerguess==1 || randomnumber-playerguess==3) //if όπου αν το νούμερο που μάντεψε ο παίχτης απέχει 1 ή 3 (ή το αντίθετο δηλαδή ο τυχαίος αριθμός να απέχει 1 ή 3 από τον αριθμό που έδωσε ο παίχτης) από τον τυχαίο αριθμό τότε παίρνει 2 πόντους.
            {

                players[player]+=2-playerguess;
                printf("\nplayer %d guessed with all other situations from random number. \n", j );
                printf("\nThe points of player %d are : %d. \n", j, players[player]);


            }
            sum[j]+=players[player]; // το sum το οποίο προσθέτει τους πόντους του κάθε παίχτη ανάλογα με το πόσοι παίχτες παίζουν και πόσοι γύροι υπάρχουν.



        }

    }
    for(i=1; i<=rounds; i++) // for η οποία κάνει το σορτάρισμα για να βγάζει τα αθροίσματα του κάθε παίχτη από το μεγαλύτερο άθροισμα προς το μικρότερο.
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
    for(j=1; j<=playerss; j++) // for η οποία εκτυπώνει τα τελικά αθροίσματα του κάθε παίχτη από το μεγαλύτερο στο μικρότερο.
    {
        printf("\nWhole points from player %d  are  : %d. \n", j, sum[j]);
    }


    return 0;
}
