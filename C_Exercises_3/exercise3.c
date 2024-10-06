#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
* Παναγιώτης Χρονόπουλος , 321/2015222
* Εργασία 3, ’σκηση 3
*/

int totall, maxoverall , maxandoverall, times=0;
                                                                 // δήλωση μεταβλητών.
int choice;

char id[5];

int length=5;

char category[3][13]= {"mosxatoleuko", "roditis", "sabbatiano"};

int stage();// δήλωση συνάρτησης.

int main()// συνάρτηση main.
{

    int o;

    printf("\nA program with grapes that salesmen sell from Samos.\n");// το προγραμμά μας.

    printf("\nGive your choice(1 to continue and give the number of salesmen for every category of grapes OR -1 to end the program) : ");// επιλογή.

    scanf("%d", &choice);

    while(choice==1)// while για το αν ο χρήστης δώσει 1 μπαίνει στην συνάρτηση stage.

    {
        for(o=0; o<3; o++)
        {

            stage();

        }

        printf("\n\nTotal kilos are %d.\n", totall);

        printf("\nMax kilos in weight that delivered are %d on %s with salesman's id %s.\n", maxoverall, category[maxandoverall], id); // τελικά αποτελέσματα.

        printf("\nMax kilos that delivered are %d. Existed on %s.\n", maxoverall, category[maxandoverall]);

        break;

    }

    while(choice==-1)// while για το αν ο χρήστης δώσει -1 ο χρήστης το πρόγραμμα τερματίζεται.

    {

        return 0;// τέλος προγράμματος.

    }

}

int stage()// συνάρτηση stage.
{

    int *salesmen;

    int i, j,  kilos, total=0;                 // δήλωση μεταβλητών.

    float average;

    printf("\nPlease give a number of salesmen that create %s : ", category[times]);

    scanf("%d", &i);

    salesmen=(int*)malloc(i*sizeof(int)); // malloc όπως θέλει η άσκηση για την καταχώρηση ακριβές αριθμού πωλητών σταφυλιών.

    for(j=1; j<=i; j++)

    {

        do

        {

            printf("\nPlease give the id of salesman %d(the id must be 5 numbers.) : ", j);

            scanf("%s", &id);

            length=strlen(id);

        }

        while(length!=5); // το πλήθος αριθμών του αριθμού μητρώου του κάθε πωλητή.

        printf("\nGive the kilos of salesman %d that delivered : ", j); // κιλά του κάθε πωλητή.

        scanf("%d", &kilos);

        salesmen[j-1]=kilos;

        total+=kilos;

        totall+=kilos;

        if(kilos>maxoverall)// συνολικά όλα τα κιλά του πωλητή με τα περισσότερα κιλά.

        {

            maxoverall=kilos;

            maxandoverall=times;

        }

    }

    free(salesmen);

    times+=1;

    return 0;// τέλος συνάρτησης.

}
