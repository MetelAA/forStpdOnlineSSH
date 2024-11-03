all: comp

comp: menu.o max.o min.o diff.o sum.o
	gcc menu.o max.o min.o diff.o sum.o -o menu

menu.o: menu.c
	gcc -c menu.c

max.o: max.c
	gcc -c max.c

min.o: min.c
	gcc -c min.c

diff.o: diff.c
	gcc -c diff.c

sum.o: sum.c
	gcc -c sum.c
