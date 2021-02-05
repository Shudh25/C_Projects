#include <stdio.h>
#include <conio.h>
#include <string.h>
struct library
{
    int id;
    char title[20];
    float price;
};

void main()
{
    struct library book[5];
    int i;
    int j = 1;

    printf("Enter the Record.\n\n");
    for (i = 0; i < 3; i++)
    {
        printf("Enter the book id : ");
        scanf("%d", &book[i].id);
        printf("Enter the book Title : ");
        fflush(stdin);
        gets(book[i].title);
        printf("Enter the book Price : ");
        scanf("%f", &book[i].price);
        printf("\n");
    }

    printf("\nHere The Records \n\n");
    for (i = 0; i < 3; i++)
    {
        printf("%d.book id : %d \n", j, book[i].id);
        printf("  book Title : %s \n", book[i].title);
        printf("  book Price : %f \n", book[i].price);
        printf("\n\n");
        j++;
    }
    getch();
}
