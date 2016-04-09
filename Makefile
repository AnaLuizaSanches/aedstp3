CC = gcc
FLAGS = #-Wall -g
FONTES = matrix.c point.c stack.c main.c
OBJETOS = $(FONTES: .c = .o)

objetos : $(FONTES)
	$(CC) -c $(FONTES)

all: $(OBJETOS)
	$(CC) $(FLAGS) $(OBJETOS) -o main

run: all
	./main

clear:
	rm *.o main
