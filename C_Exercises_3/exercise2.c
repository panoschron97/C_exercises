#include <stdio.h>
#include <string.h>

/*
* Παναγιώτης Χρονόπουλος , 321/2015222
* Εργασία 3, Άσκηση 2
*/

unsigned int choice;

char ABCD,yn;

char  afm[71][25];             // δήλωση μεταβλητών.

int tickets[71] = {0};

size_t i;

int length=5;

int testdata();

int testABCD();

int testyn();

int menu();       // δήλωση συναρτήσεων.

int bookinga();

int bookingb();

int bookingc();

int bookingd();

int main() // συνάρτηση main.
{
    menu(); // menu.

    while(choice==1)

    {
        printf("\nWould you like to book window positions(PRESS W OR P) OR seats in a corridor(PRESS C OR D) , or if you press N(no choice) u get a message : ");

        scanf(" %c", &ABCD);

        testABCD();// testABCD.

        if(ABCD=='W')

        {

            bookinga();

        }

        else if(ABCD=='P')

        {

            bookingd();

        }

        if(ABCD=='C')

        {

            bookingb();

        }

        else if(ABCD=='D')

        {

            bookingc();

        }

        if(ABCD=='N')

        {
            printf("\nSir you need to choose an air-seat please.\n");

        }

        menu();// menu

    }

    return 0;// τέλος συνάρτησης.

}

int bookinga()// συνάρτηση για επιλογή θέσης A.
{

    for(i=0; i<18; i++)
    {

        if(tickets[i]==0)
        {

            do
            {

                printf("\nPlease enter your AFM(AFM must have 5 length.) : ");

                scanf("%s", &afm[i]);

                length=strlen(afm[i]);

            }

            while(length!=5);

            tickets[i]=1;

            printf("\n\nPassenger with AFM %s has %dA ticket for window positions.\n", afm[i],i+1);

            break;

        }
        else if(tickets[17]==1)

        {

            printf("\nThere is not available ticket for window positions , Would you like a seats in a corridor ticket? (y or n) : ");

            scanf("%c", &yn);

            testyn();

            if(yn=='y')

                bookingb();

            else if(yn=='y')

                bookingc();

            break;

        }
    }

    return 0;// τέλος συνάρτησης.

}


int bookingb()// συνάρτηση για επιλογή θέσης B.
{

    for(i=18; i<36; i++)

    {

        if(tickets[i]==0)

        {

            do

            {

                printf("\nPlease enter your AFM(AFM must have 5 length.) : ");

                scanf("%s", &afm[i]);

                length=strlen(afm[i]);

            }

            while(length!=5);

            tickets[i]=1;

            printf("\n\nPassenger with AFM %s has %dB ticket for seats in a corridor.\n", afm[i], i+1);

            break;

        }

        else if(tickets[35]==1)

        {

            printf("\nThere is not available ticket for seats in a corridor , Would you like a window positions ticket? (y or n) : ");

            scanf("%c", &yn);

            testyn();

            if(yn=='y')

                bookinga();

            else if(yn=='y')

                bookingd();

            break;

        }

    }

    return 0;// τέλος συνάρτησης.

}

int bookingc()// συνάρτηση για επιλογή θέσης C.

{
    for(i=36; i<54; i++)

    {

        if(tickets[i]==0)

        {

            do

            {

                printf("\nPlease enter your AFM(AFM must have 5 length.) : ");

                scanf("%s", &afm[i]);

                length=strlen(afm[i]);

            }

            while(length!=5);

            tickets[i]=1;

            printf("\n\nPassenger with AFM %s has %dC ticket for seats in a corridor.\n", afm[i],i+1);

            break;

        }

        else if(tickets[53]==1)

        {

            printf("\nThere is not available ticket for seats in a corridor , Would you like a windows positions ticket? (y or n) : ");

            scanf("%c", &yn);

            testyn();

            if(yn=='y')

                bookinga();

            else if(yn=='y')

                bookingd();

            break;

        }
    }

    return 0;// τέλος συνάρτησης.

}

int bookingd()// συνάρτηση για επιλογή θέσης D.

{

    for(i=54; i<72; i++)

    {
        if(tickets[i]==0)

        {

            do

            {

                printf("\nPlease enter your AFM(AFM must have 5 length.) : ");

                scanf("%s", &afm[i]);

                length=strlen(afm[i]);

            }

            while(length!=5);

            tickets[i]=1;

            printf("\n\nPassenger with AFM %s has %dD ticket for window positions.\n", afm[i], i+1);

            break;

        }

        else if(tickets[71]==1)

        {

            printf("\nThere is not available ticket for windows positions , Would you like a seats in a corridor ticket? (y or n) : ");

            scanf("%c", &yn);

            testyn();

            if(yn=='y')

                bookingb();

            else if(yn=='y')

                bookingc();

            break;

        }

    }

    return 0;// τέλος συνάρτησης.

}

int testyn()// συνάρτηση που αν τελειώσουν οι θέσεις windows positions να μπορεί ο χρήστης να επιλέξει seats in a corridor ή το αντίστροφο.

{

    while(yn!='y' && yn!='n')

    {

        printf("\nThere is no such a choice , Please re-enter your choice (y or n) : ");

        scanf(" %c", &yn);

    }

    return 0;

}

int testABCD()// συνάρτηση που τεστάρει αν ο χρήστης δεν δώσει σωστό γράμμα.

{

    while(ABCD!='W' && ABCD!='C' && ABCD!='N' && ABCD!='P' && ABCD!='D')

    {

        printf("\nThere is no such a choice , Please re-enter your choice (W OR C OR N OR P OR D) : ");

        scanf(" %c", &ABCD);
    }

    return 0;// τέλος συνάρτησης.

}

int testdata()// συνάρτηση που τεστάρει αν ο χρήστης δεν δώσει 1 ή -1.

{

    while(choice!=1 && choice!=-1)

    {
        printf("\nThere is no such a choice , Please re-enter your choice (1 or -1) : ");

        scanf("%u", &choice);

    }

    return 0;// τέλος συνάρτησης.

}

int menu()// συνάρτηση που περιέχει το menu.

{

    printf("\n\nBooking program for air-seats.\n");

    printf("\nTo book a person press (1).\n");

    printf("\nTo exit the program press (-1).\n");

    printf("\nPlease enter your choice : ");

    scanf("%u", &choice);

    testdata();

    return 0;// τέλος συνάρτησης.

}


