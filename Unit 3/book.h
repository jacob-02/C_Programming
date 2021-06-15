typedef struct Book
{
    int id;
    char title[100];
    char author[100];
    int price;
    int year;
} book_t;

void read_details(book_t *b, int n);
void display_details(book_t *b, int n);
int fetch_books_year(book_t *b, int n, int year, book_t *);
int fetch_books_author(book_t *b, int n, char *author, book_t *);