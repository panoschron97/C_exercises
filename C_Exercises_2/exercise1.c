#include <stdio.h>
#include <string.h>
#define stringg 10
#define stringlength 20
/*
* Παναγιώτης Χρονόπουλος, 321/2015222
* Εργασία 2, Άσκηση 1
*/

int main()
{

    int q, w, e, i ;
    char string[stringg][stringlength], t ;                 //δήλωση μεταβλητών
    int N, f;
    char a;

    printf("\nHow many strings u want : ");     // εδώ δίνω πόσα strings θέλω να μου εμφανίστουν στο τέλος.
    scanf("%d", &N);

    for(i=0; i<N; i++)
    {
        printf("\nGive string : ");               //for στην οποία με βάση τον αριθμό των strings που έχω δώσει , κάνει τις αντίστοιχες επαναλήψεις και δίνω τα strings από το πληκτρολόγιο.
        scanf(" %[^\n]s", &string[i]);

    }

    for(i=0; i<N; i++)                     //for όπου με βάση το μέγεθος κάθε string κάνει το σορτάρισμα των χαρακτήρων αλλά και των κενών.
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

    for(i=0; i<N; i++)            // Τελική for η οποία μας εμφανίζει κάθε string που έχουμε ως χρήστες δώσει από το πληκτρολόγιο ( αν υπάρχουν κενά εμφανίζει πρώτα τα κενά και μετά τους χαρακτήρες από κάθε strjng αλφαβητικά.
    {
        printf( "\nSorted string is : %s \n", string[i]);

    }
    return 0;
}
