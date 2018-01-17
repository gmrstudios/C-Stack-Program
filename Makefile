all: main.o stack.o
	gcc -o main main.o stack.o

%.o: %.c
	gcc -c $<

.PHONY: clean
clean:
	rm -f main *.o
