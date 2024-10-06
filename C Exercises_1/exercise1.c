#include <stdio.h>

/*
* Παναγιώτης Χρονόπουλος , 3212015222
* Εργασία 1, Ασκηση 1
*/

int main()
{


    int fourdigit;
    int onedigit;                //Δήλωση τριών ακέραιων μεταβλητών.
    int fivedigit;

    printf(" Enter four digit number : ");
    scanf("%d", &fourdigit);                        //διαβάζει τον τετραψήφιο αριθμό που δώσαμε από το πληκτρολόγιο.

    printf(" Enter one digit number : ");
    scanf("%d", &onedigit);                         //διαβάζει τον μονοψήφιο αριθμό που δώσαμε από το πληκτρολόγιο.

    fivedigit=(fourdigit/100)*1000 +fourdigit%100 + onedigit*100; //πράξη η οποία καταχωρεί τον μονοψήφιο αριθμό στην μέση του τετραψήφιου

    printf(" The five digit number is : %d ", fivedigit);  // εκτυπώνει τον πενταψήφιο αριθμό που θέλουμε.

    return 0;
}
