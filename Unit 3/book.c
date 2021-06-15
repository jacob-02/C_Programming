#include "book.h"
#include <stdio.h>
#include "string.h"

void read_details(book_t *b, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("enter id, title, author, price and year of publication for book %d\n", i + 1);
        scanf("%d%s%s%d%d", &b[i].id, b[i].title, b[i].author, &b[i].price, &b[i].year);
        // &((b+i)->id) is also valid in scanf. Using the pointer notation
    }
}

void display_details(book_t *b, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("\n-->ID\tTitle\tAuthor\tPrice\tYear\n");
        printf("\n-->%d\t%s\t%s\t%d\t%d\n", b[i].id, b[i].title, b[i].author, b[i].price,
               b[i].year);
        // (b+i)->id is a valid pointer notation to print id
    }
}

int fetch_books_year(book_t *b, int n, int year, book_t *b_year)
{
    int i;
    int count = 0;

    for (i = 0; i < n; i++)
    {
        if (b[i].year == year)
        {
            count++;
            b_year[count - 1] = b[i];
        }
    }

    return count;
}

int fetch_books_author(book_t *b, int n, char *author, book_t *b_author)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (strcmp(b[i].author, author) == 0)
        {
            count++;
            b_author[count - 1] = b[i];
        }
        
    }
    return count;    
}