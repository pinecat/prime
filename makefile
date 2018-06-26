all:	prime

prime:	prime.c
	gcc -o prime prime.c

clean:
	rm -f *.o prime
