a.out:salary.o salary_function.o
	gcc salary_function.o salary.o
salary.o:salary.c salary.h
	gcc -c salary.c
salary_function.o:salary_function.c salary.h
	gcc -c salary_function.c
