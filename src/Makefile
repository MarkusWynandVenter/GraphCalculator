CC = g++
CFLAGS = -Wall -g

main: main.o equationSolver.o equationContext.o toString.o equationDifferentiate.o equationSimplify.o equationFindX.o
	$(CC) $(CFLAGS) -o main main.o equationSolver.o equationContext.o toString.o equationDifferentiate.o equationSimplify.o equationFindX.o

main.o: main.cpp equationSolver.h equationContext.h toString.h equationDifferentiate.h equationSimplify.h equationFindX.h
	$(CC) $(CFLAGS) -c main.cpp

equationSolver.o: equationSolver.cpp equationSolver.h equationContext.h toString.h equationDifferentiate.h equationSimplify.h equationFindX.h

equationContext.o: equationContext.cpp equationContext.h toString.h equationDifferentiate.h equationSimplify.h equationFindX.h

toString.o: toString.cpp toString.h

equationDifferentiate.o: equationDifferentiate.cpp equationDifferentiate.h
	
equationSimplify.o: equationSimplify.cpp equationSimplify.h

equationFindX.o: equationFindX.cpp equationFindX.h

clean:
	rm *.o main
