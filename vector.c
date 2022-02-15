#include <stdio.h>
#include <stdlib.h>

struct student
{
    char name;
    char major;
    int age;
    double gpa;
};

/* _ _ _ _ _ ........... ___ */
/* Trebuie gasita o metoda ca sa citesti elementele unui vector de la tastatura */


int main()
{
    int vector_elemente[6];
    int i;

    printf("Va rog introduceti elementele in vector\n");

    for(i = 0; i < 6; i++)
    {
        printf("v[%d] = ",i);
        scanf("%d", &vector_elemente[i]);
    }

    for(i=0; i<=5; i++)
    {
        printf("v[%d]:%d\n", i,vector_elemente[i]);
    }




    return 0;
}
