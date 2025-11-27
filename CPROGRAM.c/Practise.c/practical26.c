#include <stdio.h>
#include <string.h>

struct charusat_sport                                          //structure to store details of charusat sports
{
    char teamName[20], sportName[20];

    struct coach                                   //structure to store details of coach
    {
        int age, experience;
        char name[20];
    } c;
};

int main()
{
    int i, n;
    struct charusat_sport s1[i];
    int choice;
    char searchName[20];

    printf("enter total number of teams: ");
    scanf("%d", &n);

    do
    {
        printf("\n1.add team \n2.display team \n3.search team \n4.exit\n");
        scanf("%d", &choice);  //take choice for perform operations
        switch (choice)
        {
        case 1:
        {

            for (int i = 1; i <= n; i++)
            {
                printf("enter sports name:");
                scanf("%s", s1[i].sportName);

                printf("enter team name:");
                scanf("%s", s1[i].teamName);

                printf("enter coach name:");
                scanf("%s", s1[i].c.name);

                printf("enter coach age:");
                scanf("%d", &s1[i].c.age);

                printf("enter experience of coach:");
                scanf("%d", &s1[i].c.experience);

       printf("\n=====================================================\n");
            }
        }

        case 2:
        {

            for (int i = 1; i <= n; i++)
            {
                printf("\nsports name:%s", s1[i].sportName);

                printf("\nteam name:%s", s1[i].teamName);

                printf("\ncoach name:%s", s1[i].c.name);

                printf("\nenter coach age:%d", s1[i].c.age);

                printf("\nexperience of coach:%d", s1[i].c.experience); printf("\n==========================================================\n");
            }
            break;
        }

        case 3:
        {
            for (i = 1; i <= n; i++)
            {
                printf("search team name:");
                scanf("%s", searchName);
                if (strcmp(s1[i].teamName, searchName) == 0)
                
    printf("\nteam: %s \nsports: %s \ncoach: %s \nage:%d \nexperience: %d\n", s1[i].teamName, s1[i].sportName, s1[i].c.name, s1[i].c.age, s1[i].c.experience);
printf("\n==========================================================\n");
                }
                else
                    printf("\nteam not found.");
                break;
            }
        }
        }
    } while (choice != 4);

    printf("\n*****************************************");
    printf("\n24DCE053-TIRTH KADIVAR\n");

    return 0;
}

