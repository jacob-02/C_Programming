a.out:book_client.o book.o
	gcc book_client.o book.o
book_client.o:book_client.c book.h
	gcc -c book_client.c
book.o:book.c book.h
	gcc -c book.c