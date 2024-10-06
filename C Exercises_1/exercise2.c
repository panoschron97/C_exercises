#include <stdio.h>

/* *
Παναγιώτης Χρονόπουλος , 3212015222
* Εργασία 1, Ασκηση 2
*/

int main()
{

    int n;
    int m;                    //Δήλωση μεταβλητών
    int i;
    int j;

    printf("\n Give n : ");
    scanf("%d", &n);
    // διάβασμα ακεραίου αριθμού n και m όπου δώσαμε από το πληκτρολόγιο.
    printf("\n Give m : ");
    scanf("%d", &m);

    for(i=0; i<n; i++)
    {
        // δύο for οι οποίες εκτυπώνουν τις σειρές +--

        for(j=0; j<m; j++)
        {

            printf("+""--");
        }
        printf("+\n");

        for(j=0; j<m; j++)           // for η οποία εκτυπώνει τις σειρές με |
        {

            if(i!=n-1)
            {
                printf("|  ");
            }
        }
        if(i!=n-1)
        {
            printf("|\n");

        }
    }
}


