#include <stdio.h>

/* *
���������� ����������� , 3212015222
* ������� 1, ������ 2
*/

int main()
{

    int n;
    int m;                    //������ ����������
    int i;
    int j;

    printf("\n Give n : ");
    scanf("%d", &n);
    // �������� �������� ������� n ��� m ���� ������ ��� �� ������������.
    printf("\n Give m : ");
    scanf("%d", &m);

    for(i=0; i<n; i++)
    {
        // ��� for �� ������ ���������� ��� ������ +--

        for(j=0; j<m; j++)
        {

            printf("+""--");
        }
        printf("+\n");

        for(j=0; j<m; j++)           // for � ����� ��������� ��� ������ �� |
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


