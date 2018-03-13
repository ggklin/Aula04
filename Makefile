PROG = Aula04
CC = g++
CPPFLAGS = -Wall -ansi -pedantic -O0 -g
OBJS = main.o milionario.o relatorio.o cedulas.o

$(PROG) : $(OBJS)
	$(CC) $(OBJS) -o $(PROG)

main.o :
	$(CC) $(CPPFLAGS) -c src/main.cpp

milionario.o :
	$(CC) $(CPPFLAGS) -c src/milionario.cpp

relatorio.o :
	$(CC) $(CPPFLAGS) -c src/relatorio.cpp

cedulas.o :
	$(CC) $(CPPFLAGS) -c src/cedulas.cpp

clean:
	rm -f *.o
