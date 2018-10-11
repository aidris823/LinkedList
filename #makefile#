all: driver.o list.o
	gcc -o driver.o list.o

list.o: list.c
	gcc -c list.c

driver.o: driver.c list.h
	gcc -c driver.c

run: 
	./out

clean:
	rm *.exe
	rm *.o
