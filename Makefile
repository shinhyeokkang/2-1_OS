CO_exe : Compare.o main.o
	gcc -o CO_exe Compare.o main.o

Compare.o : Compare.c
	gcc -c -o Compare.o Compare.c

main.o : main.c
	gcc -c -o main.o main.c

clean : 
	rm*.o CO_exe
