#include <stdio.h>
#include "book.h"

int main()
{
    book_t b[100];
    book_t b_year[100];
    book_t b_author[100];

    printf("How many books details you want to enter?");
    int n;
    scanf("%d", &n);

    printf("enter the details of %d books\n", n);
    read_details(b, n);

    int count;

    printf("enter the year of publication to find list of books in that year");
    int year;
    scanf("%d", &year);

    count = fetch_books_year(b, n, year, b_year);

    if (count)
    {
        printf("List of books with %d as year of publication\n", year);
        display_details(b_year, count);
    }

    else
    {
        printf("books published in %d is not available in the dataset\n", year);
    }
    
    printf("enter the author name to find the list of books by that author\n");

    char author[100];
    scanf("%s", author);

    count = fetch_books_author(b, n, author, b_author);

    if (count)
        if (count)
        {
            printf("List of books by %s\n", author);
            display_details(b_author, count);
        }
        else
            printf("books by %s is not available in the dataset\n", author);
}