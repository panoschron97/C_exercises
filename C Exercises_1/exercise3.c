#include <stdio.h>

/* *
Παναγιώτης Χρονόπουλος , 3212015222
* Εργασία 1, Ασκηση 3
*/


int main()
{

    int type;
    int days;
    float size;            //Δήλωση μεταβλητών
    float cost;
    int kappa;
    int choice;
    float tax=0.1;
    do                //main do while η οποία είναι η καλύτερη λύση για menu από ότι η for
    {
        do
        {

            printf("\n Give type of vessel (1:speedboat , 2:sailing vessel) : ");     // μία do while για το τι τύπο σκάφους θέλει ο ενοικιαστής να νοικιάσει.
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
            cost=days*100;                                            //εδώ ο χρήστης(ενοικιαστής) με βάση τις ημέρες το μέγεθος σκάφους και τον τύπο σκάφους βγαίνει το τελικό κόστος.
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
            }                                                                 //μία do while η οποία δίνει την επιλογή αν ο ενοικιαστής θέλει πλήρης ασφάλιστικη κάλυψη ή όχι.
            else if (choice==2)
            {
                printf("\n The cost is : %f \n", cost);
            }

        }
        while(choice!=1 && choice!=2);


        do
        {
            printf("\n Do u want to rent another boat ? (No:0 , Yes:1) : ");  // μία do while για το  αν ο χρήστης(ενοικιαστής) θέλει να ξανανοικιάσει και άλλα σκάφη.
            scanf("%d", &kappa);

        }
        while(kappa!=0 && kappa!=1);
    }
    while(kappa);

    return 0;
}

