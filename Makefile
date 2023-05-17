main: main.o Person.o dictionary.o
	g++ -o main main.o dictionary.o Person.o

tests: tests.o Person.o dictionary.o
	g++ -o tests tests.o dictionary.o Person.o


Person.o: Person.cpp Person.h

dictionary.o: dictionary.cpp dictionary.h Person.h

main.o: main.cpp dictionary.h Person.h

tests.o: tests.cpp doctest.h dictionary.h Person.h

clean:
	rm -f main.o dictionary.o Person.o tests.o