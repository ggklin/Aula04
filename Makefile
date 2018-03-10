PROG = Aula04
CC = g++
CPPFLAGS = -Wall -ansi -pedantic -O0 -g
OBJS = main.o milionario.o relatorio.o cedulas.o

$(PROG) : $(OBJS)
	$(CC) $(OBJS) -o $(PROG)

main.o :
	$(CC) $(CPPFLAGS) -c main.cpp

milionario.o :
	$(CC) $(CPPFLAGS) -c milionario.cpp

relatorio.o :
	$(CC) $(CPPFLAGS) -c relatorio.cpp

cedulas.o :
	$(CC) $(CPPFLAGS) -c cedulas.cpp

clean:
	rm -f *.o