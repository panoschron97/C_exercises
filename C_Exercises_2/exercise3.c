#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define bool int
#define true 1
#define false 0

/*
* Παναγιώτης Χρονόπουλος, 321/2015222
* Εργασία 2, Άσκηση 3
*/

bool Password_Verifier(char []); // συνάρτηση που εξετάζει τον κωδικό μας αν πληρεί αυτα που θέλει ο κάθε κωδικός ανάλογα με τον αριθμό των χρηστών πάντα.

int main()
{
    int i,N;
    char password[16][16];
    char username[16][16];                 // δήλωση μεταβλητών.
    int  length;
    int lengthforcompare;

    printf("\nWelcome to the code creation program. \n");

    printf("\nGive how many user-names you want : "); // εδώ ο χρήστης δίνει πόσους παίχτες θέλει.
    scanf("%d", &N);

    for(i=1; i<=N; i++) // for η οποία ανάλογα με τους πόσους χρήστες δώσαμε πριν κάνει τόσες επαναλήψεις και εμείς από το πληκτρολόγιο δίνουμε τα user-names.
    {

        printf("\nGive the %d user-name : ", i);
        scanf("%s", &username[i]);

        do     // μία do while για το πόσο μέγεθος θέλουμε να είναι ο κωδικός μας.
        {

            printf("\nGive a length of the password between ( 9 - 15 length ). : ");
            scanf("%d", &length);
        }
        while(length>15 || length<9);

        printf("\nYou creating a password that has %d length. \n", length); // μήνυμα για το πόσο μέγεθος είναι ο κωδικός κάθε χρήστη(user).
        do // μία do while η οποία ξαναζητάει το μέγεθος του κωδικού για verified και ο χρήστης δίνει τον κωδικό , πάντα ανάλογα με το μέγεθος που έχει δώσει.
        {
            printf("\nPlease give again the length of the password you entered before. : ");
            scanf("%d", &lengthforcompare);
            printf("\nPlease enter a password that has at least one uppercase character,two lowercase characters,four numbers and 2 symbols.: \n");
            scanf("%s", &password[i]);

            length=strlen(password[i]);

        }
        while(length!=lengthforcompare);

        if(!Password_Verifier(password[i])) // if όπου αν ο κωδικός δεν πληρεί τα στοιχεία που θέλουμε τότε ενημερώνει τον χρήστη ότι δεν είναι έγκυρος.
        {
            printf("\nYour password is not valid. \n");
        }
        else // αλλιώς τον ενημερώνει ότι είναι έγκυρος.
        {
            printf("\nYour password is valid. \n");
        }

    }

    printf("\nUSERNAME\tPASSWORD"); // πίνακας στον οποίο εκτυπώνονται τα user-names και τα passwords του κάθε χρήστη.

    for(i=1; i<=N; i++)
    {
        printf("\n%s", &username[i]);

        printf("\t%s\t\t", &password[i]);
    }

    return 0;
}


bool Password_Verifier(char pass[]) // όπως είπαμε και πιο πάνω ( συνάρτηση που εξετάζει τον κωδικό μας αν πληρεί αυτα που θέλει ο κάθε κωδικός ανάλογα με τον αριθμό των χρηστών πάντα.)
{
    int i;
    bool upper=false;
    bool lower=false;           // δήλωση μεταβλητών.
    bool digit=false;
    bool punct=false;

    for(i=0; i<pass[i]; i++) // for που εξετάζει τα πάντα που δίνει ο κάθε χρήστης από το πληκτρολόγιο.
    {

        if(isupper(pass[i])) // if για το αν είναι κεφαλαίο.
        {
            upper=true;
        }
        else if(islower(pass[i])) // if για το αν είναι πεζό.
        {
            lower=true;
        }
        else if(isdigit(pass[i])) // if για το αν είναι ακέραιος.
        {
            digit=true;
        }
        else if(ispunct(pass[i])) // if για το αν είναι σύμβολο.
        {
            punct=true;
        }

    }

    if(upper && lower && digit && punct) // if για το αν ο κωδικός πληρεί τα στοχεία αυτά τότε κάνε return true.
    {
        return true;
    }
    else if(!punct && !lower && !digit) // if για το όταν δεν υπάρχουν σύμβολα , πεζά και αριθμοί.
    {
        printf("\nMissing 2 symbols. \n");
        printf("\nMissing 2 lowercase characters. \n");
        printf("\nMissing 4 numbers. \n");
    }
    else if(!upper && !lower && !digit) //  if για το όταν δεν υπάρχουν κεφαλαία , πεζά και αριθμοί.
    {
        printf("\nMissing uppercase character. \n");
        printf("\nMissing 2 lowercase characters. \n");
        printf("\nMissing 4 numbers. \n");
    }
    else if(!upper && !lower && !punct) // if για το όταν δεν υπάρχουν κεφαλαία , πεζά και σύμβολα.
    {
        printf("\nMissing uppercase character. \n");
        printf("\nMissing 2 lowercase characters. \n");
        printf("\nMissing 2 symbols. \n");
    }
    else if(!upper && !digit && !punct) //  if για το όταν δεν υπάρχουν κεφαλαία , αριθμοί και σύμβολα.
    {
        printf("\nMissing uppercase character. \n");
        printf("\nMissing 4 numbers. \n");
        printf("\nMissing 2 symbols. \n");
    }
    else if(!digit && !punct) // if για το όταν δεν υπάρχουν αριθμοί και σύμβολα.
    {
        printf("\nMissing 4 numbers. \n");
        printf("\nMissing 2 symbols. \n");
    }
    else if(!upper && !lower) // if για το όταν δεν υπάρχουν κεφαλαία και πεζά.
    {
        printf("\nMissing uppercase character. \n");
        printf("\nMissing 2 lowercase characters. \n");
    }
    else if(!digit && !lower) // if για το όταν δεν υπάρχουν αριθμοί και πεζά.
    {
        printf("\nMissing 4 numbers. \n");
        printf("\nMissing 2 lowercase characters. \n");
    }
    else if(!upper && !punct) // if για το όταν δεν υπάρχουν κεφαλαία και σύμβολα.
    {
        printf("\nMissing uppercase character. \n");
        printf("\nMissing 2 symbols. \n");
    }
    else if(!upper) // if όταν δεν υπάρχουν κεφαλαία.
    {
        printf("\nMissing uppercase character. \n");
    }
    else if(!lower)  // if όταν δεν υπάρχουν πεζά.
    {
        printf("\nMissing 2 lowercase characters. \n");
    }
    else if(!digit)  // if όταν δεν υπάρχουν αριθμοί.
    {
        printf("\nMissing 4 numbers. \n");
    }
    else if(!punct)  // if όταν δεν υπάρχουν σύμβολα.
    {
        printf("\nMissing 2 symbols. \n");
    }
    else // αλλιώς return false.
    {
        return false;
    }



}


