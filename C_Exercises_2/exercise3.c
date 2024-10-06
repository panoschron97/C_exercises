#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define bool int
#define true 1
#define false 0

/*
* ���������� �����������, 321/2015222
* ������� 2, ������ 3
*/

bool Password_Verifier(char []); // ��������� ��� �������� ��� ������ ��� �� ������ ���� ��� ����� � ���� ������� ������� �� ��� ������ ��� ������� �����.

int main()
{
    int i,N;
    char password[16][16];
    char username[16][16];                 // ������ ����������.
    int  length;
    int lengthforcompare;

    printf("\nWelcome to the code creation program. \n");

    printf("\nGive how many user-names you want : "); // ��� � ������� ����� ������ ������� �����.
    scanf("%d", &N);

    for(i=1; i<=N; i++) // for � ����� ������� �� ���� ������ ������� ������ ���� ����� ����� ����������� ��� ����� ��� �� ������������ ������� �� user-names.
    {

        printf("\nGive the %d user-name : ", i);
        scanf("%s", &username[i]);

        do     // ��� do while ��� �� ���� ������� ������� �� ����� � ������� ���.
        {

            printf("\nGive a length of the password between ( 9 - 15 length ). : ");
            scanf("%d", &length);
        }
        while(length>15 || length<9);

        printf("\nYou creating a password that has %d length. \n", length); // ������ ��� �� ���� ������� ����� � ������� ���� ������(user).
        do // ��� do while � ����� ���������� �� ������� ��� ������� ��� verified ��� � ������� ����� ��� ������ , ����� ������� �� �� ������� ��� ���� �����.
        {
            printf("\nPlease give again the length of the password you entered before. : ");
            scanf("%d", &lengthforcompare);
            printf("\nPlease enter a password that has at least one uppercase character,two lowercase characters,four numbers and 2 symbols.: \n");
            scanf("%s", &password[i]);

            length=strlen(password[i]);

        }
        while(length!=lengthforcompare);

        if(!Password_Verifier(password[i])) // if ���� �� � ������� ��� ������ �� �������� ��� ������� ���� ���������� ��� ������ ��� ��� ����� �������.
        {
            printf("\nYour password is not valid. \n");
        }
        else // ������ ��� ���������� ��� ����� �������.
        {
            printf("\nYour password is valid. \n");
        }

    }

    printf("\nUSERNAME\tPASSWORD"); // ������� ���� ����� ������������ �� user-names ��� �� passwords ��� ���� ������.

    for(i=1; i<=N; i++)
    {
        printf("\n%s", &username[i]);

        printf("\t%s\t\t", &password[i]);
    }

    return 0;
}


bool Password_Verifier(char pass[]) // ���� ������ ��� ��� ���� ( ��������� ��� �������� ��� ������ ��� �� ������ ���� ��� ����� � ���� ������� ������� �� ��� ������ ��� ������� �����.)
{
    int i;
    bool upper=false;
    bool lower=false;           // ������ ����������.
    bool digit=false;
    bool punct=false;

    for(i=0; i<pass[i]; i++) // for ��� �������� �� ����� ��� ����� � ���� ������� ��� �� ������������.
    {

        if(isupper(pass[i])) // if ��� �� �� ����� ��������.
        {
            upper=true;
        }
        else if(islower(pass[i])) // if ��� �� �� ����� ����.
        {
            lower=true;
        }
        else if(isdigit(pass[i])) // if ��� �� �� ����� ��������.
        {
            digit=true;
        }
        else if(ispunct(pass[i])) // if ��� �� �� ����� �������.
        {
            punct=true;
        }

    }

    if(upper && lower && digit && punct) // if ��� �� �� � ������� ������ �� ������� ���� ���� ���� return true.
    {
        return true;
    }
    else if(!punct && !lower && !digit) // if ��� �� ���� ��� �������� ������� , ���� ��� �������.
    {
        printf("\nMissing 2 symbols. \n");
        printf("\nMissing 2 lowercase characters. \n");
        printf("\nMissing 4 numbers. \n");
    }
    else if(!upper && !lower && !digit) //  if ��� �� ���� ��� �������� �������� , ���� ��� �������.
    {
        printf("\nMissing uppercase character. \n");
        printf("\nMissing 2 lowercase characters. \n");
        printf("\nMissing 4 numbers. \n");
    }
    else if(!upper && !lower && !punct) // if ��� �� ���� ��� �������� �������� , ���� ��� �������.
    {
        printf("\nMissing uppercase character. \n");
        printf("\nMissing 2 lowercase characters. \n");
        printf("\nMissing 2 symbols. \n");
    }
    else if(!upper && !digit && !punct) //  if ��� �� ���� ��� �������� �������� , ������� ��� �������.
    {
        printf("\nMissing uppercase character. \n");
        printf("\nMissing 4 numbers. \n");
        printf("\nMissing 2 symbols. \n");
    }
    else if(!digit && !punct) // if ��� �� ���� ��� �������� ������� ��� �������.
    {
        printf("\nMissing 4 numbers. \n");
        printf("\nMissing 2 symbols. \n");
    }
    else if(!upper && !lower) // if ��� �� ���� ��� �������� �������� ��� ����.
    {
        printf("\nMissing uppercase character. \n");
        printf("\nMissing 2 lowercase characters. \n");
    }
    else if(!digit && !lower) // if ��� �� ���� ��� �������� ������� ��� ����.
    {
        printf("\nMissing 4 numbers. \n");
        printf("\nMissing 2 lowercase characters. \n");
    }
    else if(!upper && !punct) // if ��� �� ���� ��� �������� �������� ��� �������.
    {
        printf("\nMissing uppercase character. \n");
        printf("\nMissing 2 symbols. \n");
    }
    else if(!upper) // if ���� ��� �������� ��������.
    {
        printf("\nMissing uppercase character. \n");
    }
    else if(!lower)  // if ���� ��� �������� ����.
    {
        printf("\nMissing 2 lowercase characters. \n");
    }
    else if(!digit)  // if ���� ��� �������� �������.
    {
        printf("\nMissing 4 numbers. \n");
    }
    else if(!punct)  // if ���� ��� �������� �������.
    {
        printf("\nMissing 2 symbols. \n");
    }
    else // ������ return false.
    {
        return false;
    }



}


