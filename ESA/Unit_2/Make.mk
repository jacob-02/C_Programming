a.out:palindrome.o server.o
	gcc palindrome.o server.o
palindrome.o:palindrome.c palindrome.h
	gcc -c palindrome.c
server.o:server.c palindrome.h
	gcc -c server.c