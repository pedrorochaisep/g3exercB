funcoes.o: funcoes.c
	gcc -Wall -c funcoes.c 

letra: letra.c funcoes.o
	gcc -Wall -o letra letra.c funcoes.o


letexto: letexto.c funcoes.o
	gcc -Wall -o letexto letexto.c funcoes.o