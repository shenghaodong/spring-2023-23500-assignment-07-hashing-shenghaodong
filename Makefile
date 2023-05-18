main: main.o lists.o node.o Person.o dictionary.o
	g++ -o main main.o lists.o node.o Person.o dictionary.o

tests: tests.o lists.o node.o Person.o dictionary.o
	g++ -o tests tests.o lists.o node.o Person.o dictionary.o


node.o: node.cpp node.h

lists.o: lists.cpp lists.h node.h

main.o: main.cpp Person.h node.h dictionary.h lists.h

Person.o: Person.cpp Person.h

tests.o: tests.cpp doctest.h Person.h lists.h node.h dictionary.h

dictionary.o: dictionary.cpp dictionary.h Person.h lists.h node.h

clean:
	rm -f main.o tests.o Person.o node.o lists.o dictionary.o