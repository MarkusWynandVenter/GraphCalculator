CXX = g++
CFLAGS = -Wall -g

objects = main.o equationSolver.o equationContext.o toString.o equationDifferentiate.o equationSimplify.o equationFindX.o gatherInput.o commonMathFunc.o

all: $(objects)
	$(CXX) $(CFLAGS) -o main $(objects)

main.o: main.cpp equationSolver.h

equationSolver.o: equationSolver.h equationSolver.cpp

equationContext.o: equationContext.h equationContext.cpp

toString.o: toString.h toString.cpp

gatherInput.o: gatherInput.h gatherInput.cpp

equationDifferentiate.o: equationDifferentiate.h equationDifferentiate.cpp

equationSimplify.o: equationSimplify.h equationSimplify.cpp

equationFindX.o: equationFindX.h equationFindX.cpp

commonMathFunc.o: commonMathFunc.h commonMathFunc.cpp

.PHONY: all clean

clean:
	rm *.o main
