C_SOURCES = $(wildcard *c image/*c)
HEADERS = $(wildcard *h image/*h)
C_OBJECTS = $(C_SOURCES: .c=.o)
CFLAGS =

MAIN = main
CC = gcc

run: $(MAIN)
	./$(MAIN)

main: $(C_OBJECTS)
	$(CC) $(CFLAGS) $^ -o $@ -lm

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c -Wall $< -o $@ -lm

clean:
	rm *.o image/*.o
