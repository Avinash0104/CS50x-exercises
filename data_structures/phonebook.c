#include <stdio.h>
#include <string.h>

typedef struct
{
    char *name;
    char *number;
}
person;

int main(void)
{

    person  people[2];

    people[0].name = "Carter";
    people[0].number = "+60127397293";

    people[1].name = "David";
    people[1].number = "+60168204892";

    for (int i = 0; i < 2; i++)
    {
        if (strcmp(people[i].name, "David") == 0)
        {
            printf("found %s", people[i].number);
            return (0);
        }
    }
    printf("Not found");
    return (1);
}