all: drive.o list.o
	gcc -o drive.o list.o

list.o: list.c
	gcc -c list.c

driver.o: drive.c list.h
	gcc -c drive.c

run: 
	./out

clean:
	rm *.exe
	rm *.o
