.PHONY:all clean

all:rolls

rolls: main.o rolls.o
	g++ main.o rolls.o -o main
main.o:
	g++ -c main.cpp
rolls.o:rolls.cpp rolls.h
	g++ -c rolls.cpp
clean:
	rm -f *.o main
	
